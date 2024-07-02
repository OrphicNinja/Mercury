// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitMainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitMainMenu() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitMainMenu();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitMainMenu::execHandleP2PSessionDestroyed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleP2PSessionDestroyed(Z_Param_SessionName,Z_Param_bResult);
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitMainMenu::StaticRegisterNativesUSBZStateMachineStateWaitMainMenu()
	{
		UClass* Class = USBZStateMachineStateWaitMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleP2PSessionDestroyed", &USBZStateMachineStateWaitMainMenu::execHandleP2PSessionDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics
	{
		struct SBZStateMachineStateWaitMainMenu_eventHandleP2PSessionDestroyed_Parms
		{
			FName SessionName;
			bool bResult;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitMainMenu_eventHandleP2PSessionDestroyed_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SBZStateMachineStateWaitMainMenu_eventHandleP2PSessionDestroyed_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStateMachineStateWaitMainMenu_eventHandleP2PSessionDestroyed_Parms), &Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::NewProp_bResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitMainMenu, nullptr, "HandleP2PSessionDestroyed", nullptr, nullptr, sizeof(SBZStateMachineStateWaitMainMenu_eventHandleP2PSessionDestroyed_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_NoRegister()
	{
		return USBZStateMachineStateWaitMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickSeamlessTravelTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickSeamlessTravelTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitMainMenu_HandleP2PSessionDestroyed, "HandleP2PSessionDestroyed" }, // 1774547167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitMainMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitMainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_TickSeamlessTravelTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitMainMenu" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_TickSeamlessTravelTimer = { "TickSeamlessTravelTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitMainMenu, TickSeamlessTravelTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_TickSeamlessTravelTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_TickSeamlessTravelTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_LoadingScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_LoadingScreen = { "LoadingScreen", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitMainMenu, LoadingScreen), Z_Construct_UClass_USBZLoadingScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_LoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_LoadingScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_TickSeamlessTravelTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::NewProp_LoadingScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::ClassParams = {
		&USBZStateMachineStateWaitMainMenu::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitMainMenu, 2110314232);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitMainMenu>()
	{
		return USBZStateMachineStateWaitMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitMainMenu(Z_Construct_UClass_USBZStateMachineStateWaitMainMenu, &USBZStateMachineStateWaitMainMenu::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
