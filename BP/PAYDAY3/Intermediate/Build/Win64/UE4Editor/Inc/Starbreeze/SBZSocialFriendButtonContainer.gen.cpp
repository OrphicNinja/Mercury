// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSocialFriendButtonContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSocialFriendButtonContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialFriendButtonContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialFriendButtonContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMember();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTextEntryButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialFriendButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execAddPartyMember)
	{
		P_GET_STRUCT(FSBZPartyMember,Z_Param_NewMember);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPartyMember(Z_Param_NewMember);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execBuildPartyMembersList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildPartyMembersList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execGetPartyMembers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZPartyMember>*)Z_Param__Result=P_THIS->GetPartyMembers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execGetPartyMembersNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartyMembersNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execGetPlatformName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetPlatformName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execRefreshFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execRefreshPartyPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPartyPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execRequestPartyLeave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPartyLeave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execSearchUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchUser(Z_Param_UserName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execStartAutoRefreshFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAutoRefreshFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execStopAutoRefreshFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAutoRefreshFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execUpdateFriendButton)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFriendButton(Z_Param_UserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execUpdateFriendFilterText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFriendFilterText(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButtonContainer::execUpdatePartyMembersList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePartyMembersList();
		P_NATIVE_END;
	}
	static FName NAME_USBZSocialFriendButtonContainer_OnFriendButtonFocused = FName(TEXT("OnFriendButtonFocused"));
	void USBZSocialFriendButtonContainer::OnFriendButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZSocialFriendButtonContainer_eventOnFriendButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialFriendButtonContainer_OnFriendButtonFocused),&Parms);
	}
	static FName NAME_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated = FName(TEXT("OnFriendButtonsUpdated"));
	void USBZSocialFriendButtonContainer::OnFriendButtonsUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated),NULL);
	}
	static FName NAME_USBZSocialFriendButtonContainer_OnPartyButtonFocused = FName(TEXT("OnPartyButtonFocused"));
	void USBZSocialFriendButtonContainer::OnPartyButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZSocialFriendButtonContainer_eventOnPartyButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialFriendButtonContainer_OnPartyButtonFocused),&Parms);
	}
	static FName NAME_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete = FName(TEXT("OnPartyPanelRefreshComplete"));
	void USBZSocialFriendButtonContainer::OnPartyPanelRefreshComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete),NULL);
	}
	void USBZSocialFriendButtonContainer::StaticRegisterNativesUSBZSocialFriendButtonContainer()
	{
		UClass* Class = USBZSocialFriendButtonContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPartyMember", &USBZSocialFriendButtonContainer::execAddPartyMember },
			{ "BuildPartyMembersList", &USBZSocialFriendButtonContainer::execBuildPartyMembersList },
			{ "GetPartyMembers", &USBZSocialFriendButtonContainer::execGetPartyMembers },
			{ "GetPartyMembersNum", &USBZSocialFriendButtonContainer::execGetPartyMembersNum },
			{ "GetPlatformName", &USBZSocialFriendButtonContainer::execGetPlatformName },
			{ "RefreshFriends", &USBZSocialFriendButtonContainer::execRefreshFriends },
			{ "RefreshPartyPanel", &USBZSocialFriendButtonContainer::execRefreshPartyPanel },
			{ "RequestPartyLeave", &USBZSocialFriendButtonContainer::execRequestPartyLeave },
			{ "SearchUser", &USBZSocialFriendButtonContainer::execSearchUser },
			{ "StartAutoRefreshFriends", &USBZSocialFriendButtonContainer::execStartAutoRefreshFriends },
			{ "StopAutoRefreshFriends", &USBZSocialFriendButtonContainer::execStopAutoRefreshFriends },
			{ "UpdateFriendButton", &USBZSocialFriendButtonContainer::execUpdateFriendButton },
			{ "UpdateFriendFilterText", &USBZSocialFriendButtonContainer::execUpdateFriendFilterText },
			{ "UpdatePartyMembersList", &USBZSocialFriendButtonContainer::execUpdatePartyMembersList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics
	{
		struct SBZSocialFriendButtonContainer_eventAddPartyMember_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::NewProp_NewMember = { "NewMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventAddPartyMember_Parms, NewMember), Z_Construct_UScriptStruct_FSBZPartyMember, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::NewProp_NewMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "AddPartyMember", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventAddPartyMember_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "BuildPartyMembersList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics
	{
		struct SBZSocialFriendButtonContainer_eventGetPartyMembers_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyMember, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventGetPartyMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "GetPartyMembers", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventGetPartyMembers_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics
	{
		struct SBZSocialFriendButtonContainer_eventGetPartyMembersNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventGetPartyMembersNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "GetPartyMembersNum", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventGetPartyMembersNum_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics
	{
		struct SBZSocialFriendButtonContainer_eventGetPlatformName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventGetPlatformName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "GetPlatformName", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventGetPlatformName_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventOnFriendButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZSocialFriendButtonContainer_eventOnFriendButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButtonContainer_eventOnFriendButtonFocused_Parms), &Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "OnFriendButtonFocused", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventOnFriendButtonFocused_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "OnFriendButtonsUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventOnPartyButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZSocialFriendButtonContainer_eventOnPartyButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButtonContainer_eventOnPartyButtonFocused_Parms), &Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "OnPartyButtonFocused", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventOnPartyButtonFocused_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "OnPartyPanelRefreshComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "RefreshFriends", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "RefreshPartyPanel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "RequestPartyLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics
	{
		struct SBZSocialFriendButtonContainer_eventSearchUser_Parms
		{
			FString UserName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventSearchUser_Parms, UserName), METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::NewProp_UserName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "SearchUser", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventSearchUser_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "StartAutoRefreshFriends", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "StopAutoRefreshFriends", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics
	{
		struct SBZSocialFriendButtonContainer_eventUpdateFriendButton_Parms
		{
			FString UserID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventUpdateFriendButton_Parms, UserID), METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::NewProp_UserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::NewProp_UserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "UpdateFriendButton", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventUpdateFriendButton_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics
	{
		struct SBZSocialFriendButtonContainer_eventUpdateFriendFilterText_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButtonContainer_eventUpdateFriendFilterText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "UpdateFriendFilterText", nullptr, nullptr, sizeof(SBZSocialFriendButtonContainer_eventUpdateFriendFilterText_Parms), Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButtonContainer, nullptr, "UpdatePartyMembersList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSocialFriendButtonContainer_NoRegister()
	{
		return USBZSocialFriendButtonContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_FilterFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_FilterFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeavePartyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeavePartyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_AccelByteFriendList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_AccelByteFriendList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_PlatformFriendList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_PlatformFriendList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_IncomingFriendRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_IncomingFriendRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_OutgoingFriendRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_OutgoingFriendRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_UserSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_UserSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_BlockedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_BlockedPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_PartyMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_OfflinePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_OfflinePlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FriendButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteFriendButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteFriendButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteFriendButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteFriendButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AccelByteFriendButtonMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformFriendButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformFriendButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformFriendButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformFriendButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformFriendButtonMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingFriendButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncomingFriendButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingFriendButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingFriendButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IncomingFriendButtonMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutgoingFriendButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutgoingFriendButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutgoingFriendButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutgoingFriendButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutgoingFriendButtonMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSearchButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserSearchButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserSearchButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSearchButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UserSearchButtonMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedPlayerButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedPlayerButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlockedPlayerButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedPlayerButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlockedPlayerButtonMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfflineFriendButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OfflineFriendButtonMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfflineFriendButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfflineFriendButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OfflineFriendButtonMap;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyEmptyButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyEmptyButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyEmptyButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyEmptyButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMemberButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PartyMemberButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyFocusedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlyFocusedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_AddPartyMember, "AddPartyMember" }, // 2368493826
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_BuildPartyMembersList, "BuildPartyMembersList" }, // 2018164909
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembers, "GetPartyMembers" }, // 2183095352
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPartyMembersNum, "GetPartyMembersNum" }, // 2893977420
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_GetPlatformName, "GetPlatformName" }, // 688713841
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonFocused, "OnFriendButtonFocused" }, // 1002282688
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnFriendButtonsUpdated, "OnFriendButtonsUpdated" }, // 3266718894
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyButtonFocused, "OnPartyButtonFocused" }, // 3073039979
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_OnPartyPanelRefreshComplete, "OnPartyPanelRefreshComplete" }, // 1557553474
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshFriends, "RefreshFriends" }, // 3445570491
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_RefreshPartyPanel, "RefreshPartyPanel" }, // 635537446
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_RequestPartyLeave, "RequestPartyLeave" }, // 1916539265
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_SearchUser, "SearchUser" }, // 2060957218
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_StartAutoRefreshFriends, "StartAutoRefreshFriends" }, // 285190050
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_StopAutoRefreshFriends, "StopAutoRefreshFriends" }, // 1652329179
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendButton, "UpdateFriendButton" }, // 4192705242
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdateFriendFilterText, "UpdateFriendFilterText" }, // 139958026
		{ &Z_Construct_UFunction_USBZSocialFriendButtonContainer_UpdatePartyMembersList, "UpdatePartyMembersList" }, // 667084883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSocialFriendButtonContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Button_FilterFriends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Button_FilterFriends = { "Button_FilterFriends", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Button_FilterFriends), Z_Construct_UClass_USBZTextEntryButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Button_FilterFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Button_FilterFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_LeavePartyButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_LeavePartyButton = { "LeavePartyButton", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, LeavePartyButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_LeavePartyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_LeavePartyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_AccelByteFriendList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_AccelByteFriendList = { "Panel_AccelByteFriendList", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_AccelByteFriendList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_AccelByteFriendList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_AccelByteFriendList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PlatformFriendList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PlatformFriendList = { "Panel_PlatformFriendList", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_PlatformFriendList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PlatformFriendList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PlatformFriendList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_IncomingFriendRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_IncomingFriendRequests = { "Panel_IncomingFriendRequests", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_IncomingFriendRequests), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_IncomingFriendRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_IncomingFriendRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OutgoingFriendRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OutgoingFriendRequests = { "Panel_OutgoingFriendRequests", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_OutgoingFriendRequests), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OutgoingFriendRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OutgoingFriendRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_UserSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_UserSearch = { "Panel_UserSearch", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_UserSearch), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_UserSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_UserSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_BlockedPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_BlockedPlayers = { "Panel_BlockedPlayers", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_BlockedPlayers), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_BlockedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_BlockedPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PartyMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PartyMembers = { "Panel_PartyMembers", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_PartyMembers), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PartyMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OfflinePlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OfflinePlayers = { "Panel_OfflinePlayers", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_OfflinePlayers), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OfflinePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OfflinePlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_FriendButtonWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_FriendButtonWidgetClass = { "FriendButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, FriendButtonWidgetClass), Z_Construct_UClass_USBZSocialFriendButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_FriendButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_FriendButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_ValueProp = { "AccelByteFriendButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_Key_KeyProp = { "AccelByteFriendButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap = { "AccelByteFriendButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, AccelByteFriendButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_ValueProp = { "PlatformFriendButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_Key_KeyProp = { "PlatformFriendButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap = { "PlatformFriendButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, PlatformFriendButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_ValueProp = { "IncomingFriendButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_Key_KeyProp = { "IncomingFriendButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap = { "IncomingFriendButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, IncomingFriendButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_ValueProp = { "OutgoingFriendButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_Key_KeyProp = { "OutgoingFriendButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap = { "OutgoingFriendButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, OutgoingFriendButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_ValueProp = { "UserSearchButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_Key_KeyProp = { "UserSearchButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap = { "UserSearchButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, UserSearchButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_ValueProp = { "BlockedPlayerButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_Key_KeyProp = { "BlockedPlayerButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap = { "BlockedPlayerButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, BlockedPlayerButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_ValueProp = { "OfflineFriendButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_Key_KeyProp = { "OfflineFriendButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap = { "OfflineFriendButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, OfflineFriendButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_ValueProp = { "PartyMembers", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_Key_KeyProp = { "PartyMembers_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, PartyMembers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_Inner = { "PartyEmptyButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool = { "PartyEmptyButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, PartyEmptyButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass = { "PartyMemberButtonWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, PartyMemberButtonWidgetClass), Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_CurrentlyFocusedButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButtonContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButtonContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_CurrentlyFocusedButton = { "CurrentlyFocusedButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButtonContainer, CurrentlyFocusedButton), Z_Construct_UClass_USBZSocialFriendButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_CurrentlyFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_CurrentlyFocusedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Button_FilterFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_LeavePartyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_AccelByteFriendList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PlatformFriendList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_IncomingFriendRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OutgoingFriendRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_UserSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_BlockedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_Panel_OfflinePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_FriendButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_AccelByteFriendButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PlatformFriendButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_IncomingFriendButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OutgoingFriendButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_UserSearchButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_BlockedPlayerButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_OfflineFriendButtonMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyEmptyButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_PartyMemberButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::NewProp_CurrentlyFocusedButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSocialFriendButtonContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::ClassParams = {
		&USBZSocialFriendButtonContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSocialFriendButtonContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSocialFriendButtonContainer, 1249035638);
	template<> STARBREEZE_API UClass* StaticClass<USBZSocialFriendButtonContainer>()
	{
		return USBZSocialFriendButtonContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSocialFriendButtonContainer(Z_Construct_UClass_USBZSocialFriendButtonContainer, &USBZSocialFriendButtonContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSocialFriendButtonContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSocialFriendButtonContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
