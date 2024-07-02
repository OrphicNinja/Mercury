// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyManagerAB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyManagerAB() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManagerAB_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManagerAB();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZPartyManagerAB::execInvitePopUpCallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvitePopUpCallback(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerAB::execJoinPartyAfterLeave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinPartyAfterLeave(Z_Param_Code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerAB::execOnEnteredGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredGameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerAB::execOnPartyLeaderMatchFound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyLeaderMatchFound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerAB::execOnPartyLeaderMatchJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyLeaderMatchJoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerAB::execOnPartyLeaderStartedMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyLeaderStartedMatchmaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerAB::execOnPartyLeaderStoppedMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyLeaderStoppedMatchmaking();
		P_NATIVE_END;
	}
	void USBZPartyManagerAB::StaticRegisterNativesUSBZPartyManagerAB()
	{
		UClass* Class = USBZPartyManagerAB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InvitePopUpCallback", &USBZPartyManagerAB::execInvitePopUpCallback },
			{ "JoinPartyAfterLeave", &USBZPartyManagerAB::execJoinPartyAfterLeave },
			{ "OnEnteredGameStart", &USBZPartyManagerAB::execOnEnteredGameStart },
			{ "OnPartyLeaderMatchFound", &USBZPartyManagerAB::execOnPartyLeaderMatchFound },
			{ "OnPartyLeaderMatchJoin", &USBZPartyManagerAB::execOnPartyLeaderMatchJoin },
			{ "OnPartyLeaderStartedMatchmaking", &USBZPartyManagerAB::execOnPartyLeaderStartedMatchmaking },
			{ "OnPartyLeaderStoppedMatchmaking", &USBZPartyManagerAB::execOnPartyLeaderStoppedMatchmaking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics
	{
		struct SBZPartyManagerAB_eventInvitePopUpCallback_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManagerAB_eventInvitePopUpCallback_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "InvitePopUpCallback", nullptr, nullptr, sizeof(SBZPartyManagerAB_eventInvitePopUpCallback_Parms), Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics
	{
		struct SBZPartyManagerAB_eventJoinPartyAfterLeave_Parms
		{
			FString Code;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManagerAB_eventJoinPartyAfterLeave_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "JoinPartyAfterLeave", nullptr, nullptr, sizeof(SBZPartyManagerAB_eventJoinPartyAfterLeave_Parms), Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "OnEnteredGameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "OnPartyLeaderMatchFound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "OnPartyLeaderMatchJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "OnPartyLeaderStartedMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerAB, nullptr, "OnPartyLeaderStoppedMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPartyManagerAB_NoRegister()
	{
		return USBZPartyManagerAB::StaticClass();
	}
	struct Z_Construct_UClass_USBZPartyManagerAB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPartyManagerAB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPartyManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPartyManagerAB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPartyManagerAB_InvitePopUpCallback, "InvitePopUpCallback" }, // 1486078505
		{ &Z_Construct_UFunction_USBZPartyManagerAB_JoinPartyAfterLeave, "JoinPartyAfterLeave" }, // 858020845
		{ &Z_Construct_UFunction_USBZPartyManagerAB_OnEnteredGameStart, "OnEnteredGameStart" }, // 554854777
		{ &Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchFound, "OnPartyLeaderMatchFound" }, // 2517162548
		{ &Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderMatchJoin, "OnPartyLeaderMatchJoin" }, // 3173697429
		{ &Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStartedMatchmaking, "OnPartyLeaderStartedMatchmaking" }, // 3893568587
		{ &Z_Construct_UFunction_USBZPartyManagerAB_OnPartyLeaderStoppedMatchmaking, "OnPartyLeaderStoppedMatchmaking" }, // 1054950228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManagerAB_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPartyManagerAB.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyManagerAB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPartyManagerAB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPartyManagerAB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPartyManagerAB_Statics::ClassParams = {
		&USBZPartyManagerAB::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPartyManagerAB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManagerAB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPartyManagerAB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPartyManagerAB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPartyManagerAB, 2042624222);
	template<> STARBREEZE_API UClass* StaticClass<USBZPartyManagerAB>()
	{
		return USBZPartyManagerAB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPartyManagerAB(Z_Construct_UClass_USBZPartyManagerAB, &USBZPartyManagerAB::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPartyManagerAB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPartyManagerAB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
