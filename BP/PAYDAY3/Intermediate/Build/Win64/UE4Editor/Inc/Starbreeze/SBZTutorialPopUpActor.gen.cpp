// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTutorialPopUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTutorialPopUpActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTutorialPopUpActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTutorialPopUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpWidgetClosed__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSideBarNotificationData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
// End Cross Module References
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execClient_ShowControlsReference)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ShowControlsReference_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execClient_ShowSideBarNotification)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ShowSideBarNotification_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execClient_ShowTutorialPopUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ShowTutorialPopUp_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execCloseTutorialPopUp)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseTutorialPopUp(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execOnActionPhaseEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseEntered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execServer_CloseTutorialPopUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CloseTutorialPopUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execShowControlsReference)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ReferenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowControlsReference(Z_Param_ReferenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execShowSideBarNotification)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NotificationIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSideBarNotification(Z_Param_NotificationIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTutorialPopUpActor::execShowTutorialPopUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TutorialIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InTutorialPopUpClosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTutorialPopUp(Z_Param_TutorialIndex,FSBZOnPopUpWidgetClosed(Z_Param_InTutorialPopUpClosed));
		P_NATIVE_END;
	}
	static FName NAME_ASBZTutorialPopUpActor_Client_ShowControlsReference = FName(TEXT("Client_ShowControlsReference"));
	void ASBZTutorialPopUpActor::Client_ShowControlsReference(const int32 Index)
	{
		SBZTutorialPopUpActor_eventClient_ShowControlsReference_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTutorialPopUpActor_Client_ShowControlsReference),&Parms);
	}
	static FName NAME_ASBZTutorialPopUpActor_Client_ShowSideBarNotification = FName(TEXT("Client_ShowSideBarNotification"));
	void ASBZTutorialPopUpActor::Client_ShowSideBarNotification(const int32 Index)
	{
		SBZTutorialPopUpActor_eventClient_ShowSideBarNotification_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTutorialPopUpActor_Client_ShowSideBarNotification),&Parms);
	}
	static FName NAME_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp = FName(TEXT("Client_ShowTutorialPopUp"));
	void ASBZTutorialPopUpActor::Client_ShowTutorialPopUp(const int32 Index)
	{
		SBZTutorialPopUpActor_eventClient_ShowTutorialPopUp_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp),&Parms);
	}
	static FName NAME_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp = FName(TEXT("Server_CloseTutorialPopUp"));
	void ASBZTutorialPopUpActor::Server_CloseTutorialPopUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp),NULL);
	}
	void ASBZTutorialPopUpActor::StaticRegisterNativesASBZTutorialPopUpActor()
	{
		UClass* Class = ASBZTutorialPopUpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ShowControlsReference", &ASBZTutorialPopUpActor::execClient_ShowControlsReference },
			{ "Client_ShowSideBarNotification", &ASBZTutorialPopUpActor::execClient_ShowSideBarNotification },
			{ "Client_ShowTutorialPopUp", &ASBZTutorialPopUpActor::execClient_ShowTutorialPopUp },
			{ "CloseTutorialPopUp", &ASBZTutorialPopUpActor::execCloseTutorialPopUp },
			{ "OnActionPhaseEntered", &ASBZTutorialPopUpActor::execOnActionPhaseEntered },
			{ "Server_CloseTutorialPopUp", &ASBZTutorialPopUpActor::execServer_CloseTutorialPopUp },
			{ "ShowControlsReference", &ASBZTutorialPopUpActor::execShowControlsReference },
			{ "ShowSideBarNotification", &ASBZTutorialPopUpActor::execShowSideBarNotification },
			{ "ShowTutorialPopUp", &ASBZTutorialPopUpActor::execShowTutorialPopUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventClient_ShowControlsReference_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "Client_ShowControlsReference", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventClient_ShowControlsReference_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventClient_ShowSideBarNotification_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "Client_ShowSideBarNotification", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventClient_ShowSideBarNotification_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventClient_ShowTutorialPopUp_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "Client_ShowTutorialPopUp", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventClient_ShowTutorialPopUp_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics
	{
		struct SBZTutorialPopUpActor_eventCloseTutorialPopUp_Parms
		{
			FName ClosingActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClosingActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventCloseTutorialPopUp_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "CloseTutorialPopUp", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventCloseTutorialPopUp_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "OnActionPhaseEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "Server_CloseTutorialPopUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics
	{
		struct SBZTutorialPopUpActor_eventShowControlsReference_Parms
		{
			int32 ReferenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReferenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::NewProp_ReferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::NewProp_ReferenceIndex = { "ReferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventShowControlsReference_Parms, ReferenceIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::NewProp_ReferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::NewProp_ReferenceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::NewProp_ReferenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "ShowControlsReference", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventShowControlsReference_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics
	{
		struct SBZTutorialPopUpActor_eventShowSideBarNotification_Parms
		{
			int32 NotificationIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotificationIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::NewProp_NotificationIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::NewProp_NotificationIndex = { "NotificationIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventShowSideBarNotification_Parms, NotificationIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::NewProp_NotificationIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::NewProp_NotificationIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::NewProp_NotificationIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "ShowSideBarNotification", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventShowSideBarNotification_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics
	{
		struct SBZTutorialPopUpActor_eventShowTutorialPopUp_Parms
		{
			int32 TutorialIndex;
			FScriptDelegate InTutorialPopUpClosed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TutorialIndex;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InTutorialPopUpClosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_TutorialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_TutorialIndex = { "TutorialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventShowTutorialPopUp_Parms, TutorialIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_TutorialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_TutorialIndex_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_InTutorialPopUpClosed = { "InTutorialPopUpClosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpActor_eventShowTutorialPopUp_Parms, InTutorialPopUpClosed), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpWidgetClosed__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_TutorialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::NewProp_InTutorialPopUpClosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTutorialPopUpActor, nullptr, "ShowTutorialPopUp", nullptr, nullptr, sizeof(SBZTutorialPopUpActor_eventShowTutorialPopUp_Parms), Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZTutorialPopUpActor_NoRegister()
	{
		return ASBZTutorialPopUpActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTutorialPopUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialPopUpArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPopUpArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TutorialPopUpArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SideBarNotificationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBarNotificationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SideBarNotificationArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlsReferenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReferenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlsReferenceArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowControlsReference, "Client_ShowControlsReference" }, // 418286055
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowSideBarNotification, "Client_ShowSideBarNotification" }, // 3394052863
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_Client_ShowTutorialPopUp, "Client_ShowTutorialPopUp" }, // 2330997686
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_CloseTutorialPopUp, "CloseTutorialPopUp" }, // 3154676465
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_OnActionPhaseEntered, "OnActionPhaseEntered" }, // 2530173009
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_Server_CloseTutorialPopUp, "Server_CloseTutorialPopUp" }, // 2869326057
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowControlsReference, "ShowControlsReference" }, // 1664275682
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowSideBarNotification, "ShowSideBarNotification" }, // 1421324015
		{ &Z_Construct_UFunction_ASBZTutorialPopUpActor_ShowTutorialPopUp, "ShowTutorialPopUp" }, // 655651711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTutorialPopUpActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray_Inner = { "TutorialPopUpArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpActor" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray = { "TutorialPopUpArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTutorialPopUpActor, TutorialPopUpArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray_Inner = { "SideBarNotificationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSideBarNotificationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpActor" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray = { "SideBarNotificationArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTutorialPopUpActor, SideBarNotificationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray_Inner = { "ControlsReferenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpActor" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray = { "ControlsReferenceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTutorialPopUpActor, ControlsReferenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_TutorialPopUpArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_SideBarNotificationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::NewProp_ControlsReferenceArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTutorialPopUpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::ClassParams = {
		&ASBZTutorialPopUpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTutorialPopUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTutorialPopUpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTutorialPopUpActor, 3945356412);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTutorialPopUpActor>()
	{
		return ASBZTutorialPopUpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTutorialPopUpActor(Z_Construct_UClass_ASBZTutorialPopUpActor, &ASBZTutorialPopUpActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTutorialPopUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTutorialPopUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
