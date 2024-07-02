// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSocialPartyButtonContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSocialPartyButtonContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialPartyButtonContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialPartyButtonContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMember();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(USBZSocialPartyButtonContainer::execAddPartyMember)
	{
		P_GET_STRUCT(FSBZPartyMember,Z_Param_NewMember);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPartyMember(Z_Param_NewMember);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyButtonContainer::execBuildPartyMembersList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildPartyMembersList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyButtonContainer::execGetPartyMembers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZPartyMember>*)Z_Param__Result=P_THIS->GetPartyMembers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyButtonContainer::execGetPartyMembersNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartyMembersNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyButtonContainer::execRefreshPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyButtonContainer::execRequestPartyLeave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPartyLeave();
		P_NATIVE_END;
	}
	static FName NAME_USBZSocialPartyButtonContainer_OnPanelRefreshComplete = FName(TEXT("OnPanelRefreshComplete"));
	void USBZSocialPartyButtonContainer::OnPanelRefreshComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialPartyButtonContainer_OnPanelRefreshComplete),NULL);
	}
	static FName NAME_USBZSocialPartyButtonContainer_OnPartyButtonFocused = FName(TEXT("OnPartyButtonFocused"));
	void USBZSocialPartyButtonContainer::OnPartyButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZSocialPartyButtonContainer_eventOnPartyButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialPartyButtonContainer_OnPartyButtonFocused),&Parms);
	}
	void USBZSocialPartyButtonContainer::StaticRegisterNativesUSBZSocialPartyButtonContainer()
	{
		UClass* Class = USBZSocialPartyButtonContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPartyMember", &USBZSocialPartyButtonContainer::execAddPartyMember },
			{ "BuildPartyMembersList", &USBZSocialPartyButtonContainer::execBuildPartyMembersList },
			{ "GetPartyMembers", &USBZSocialPartyButtonContainer::execGetPartyMembers },
			{ "GetPartyMembersNum", &USBZSocialPartyButtonContainer::execGetPartyMembersNum },
			{ "RefreshPanel", &USBZSocialPartyButtonContainer::execRefreshPanel },
			{ "RequestPartyLeave", &USBZSocialPartyButtonContainer::execRequestPartyLeave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics
	{
		struct SBZSocialPartyButtonContainer_eventAddPartyMember_Parms
		{
			FSBZPartyMember NewMember;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::NewProp_NewMember = { "NewMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialPartyButtonContainer_eventAddPartyMember_Parms, NewMember), Z_Construct_UScriptStruct_FSBZPartyMember, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::NewProp_NewMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "AddPartyMember", nullptr, nullptr, sizeof(SBZSocialPartyButtonContainer_eventAddPartyMember_Parms), Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "BuildPartyMembersList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics
	{
		struct SBZSocialPartyButtonContainer_eventGetPartyMembers_Parms
		{
			TArray<FSBZPartyMember> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyMember, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialPartyButtonContainer_eventGetPartyMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "GetPartyMembers", nullptr, nullptr, sizeof(SBZSocialPartyButtonContainer_eventGetPartyMembers_Parms), Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics
	{
		struct SBZSocialPartyButtonContainer_eventGetPartyMembersNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialPartyButtonContainer_eventGetPartyMembersNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "GetPartyMembersNum", nullptr, nullptr, sizeof(SBZSocialPartyButtonContainer_eventGetPartyMembersNum_Parms), Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "OnPanelRefreshComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialPartyButtonContainer_eventOnPartyButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZSocialPartyButtonContainer_eventOnPartyButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialPartyButtonContainer_eventOnPartyButtonFocused_Parms), &Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "OnPartyButtonFocused", nullptr, nullptr, sizeof(SBZSocialPartyButtonContainer_eventOnPartyButtonFocused_Parms), Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "RefreshPanel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyButtonContainer, nullptr, "RequestPartyLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSocialPartyButtonContainer_NoRegister()
	{
		return USBZSocialPartyButtonContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_PartyMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyMembers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyMembers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PartyMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMemberButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PartyMemberButtonWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_AddPartyMember, "AddPartyMember" }, // 3152775431
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_BuildPartyMembersList, "BuildPartyMembersList" }, // 2936984233
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembers, "GetPartyMembers" }, // 437760371
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_GetPartyMembersNum, "GetPartyMembersNum" }, // 3230338217
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPanelRefreshComplete, "OnPanelRefreshComplete" }, // 3693682489
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_OnPartyButtonFocused, "OnPartyButtonFocused" }, // 1294509222
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_RefreshPanel, "RefreshPanel" }, // 1171141731
		{ &Z_Construct_UFunction_USBZSocialPartyButtonContainer_RequestPartyLeave, "RequestPartyLeave" }, // 4171668293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSocialPartyButtonContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_Panel_PartyMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_Panel_PartyMembers = { "Panel_PartyMembers", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyButtonContainer, Panel_PartyMembers), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_Panel_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_Panel_PartyMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_ValueProp = { "PartyMembers", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_Key_KeyProp = { "PartyMembers_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyButtonContainer, PartyMembers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyButtonContainer" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass = { "PartyMemberButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyButtonContainer, PartyMemberButtonWidgetClass), Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_Panel_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSocialPartyButtonContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::ClassParams = {
		&USBZSocialPartyButtonContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSocialPartyButtonContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSocialPartyButtonContainer, 1297466031);
	template<> STARBREEZE_API UClass* StaticClass<USBZSocialPartyButtonContainer>()
	{
		return USBZSocialPartyButtonContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSocialPartyButtonContainer(Z_Construct_UClass_USBZSocialPartyButtonContainer, &USBZSocialPartyButtonContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSocialPartyButtonContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSocialPartyButtonContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
