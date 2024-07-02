// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSmartNavLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSmartNavLink() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmartNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmartNavLink();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSmartLinkReachedSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSmartNavLink::execGetNavArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UNavArea> *)Z_Param__Result=P_THIS->GetNavArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmartNavLink::execIsLinkEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmartNavLink::execSetLinkEnabled)
	{
		P_GET_UBOOL(Z_Param_bInLinkEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkEnabled(Z_Param_bInLinkEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmartNavLink::execSetNavArea)
	{
		P_GET_OBJECT(UClass,Z_Param_AreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNavArea(Z_Param_AreaClass);
		P_NATIVE_END;
	}
	void ASBZSmartNavLink::StaticRegisterNativesASBZSmartNavLink()
	{
		UClass* Class = ASBZSmartNavLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNavArea", &ASBZSmartNavLink::execGetNavArea },
			{ "IsLinkEnabled", &ASBZSmartNavLink::execIsLinkEnabled },
			{ "SetLinkEnabled", &ASBZSmartNavLink::execSetLinkEnabled },
			{ "SetNavArea", &ASBZSmartNavLink::execSetNavArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics
	{
		struct SBZSmartNavLink_eventGetNavArea_Parms
		{
			TSubclassOf<UNavArea>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmartNavLink_eventGetNavArea_Parms, ReturnValue), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmartNavLink, nullptr, "GetNavArea", nullptr, nullptr, sizeof(SBZSmartNavLink_eventGetNavArea_Parms), Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics
	{
		struct SBZSmartNavLink_eventIsLinkEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSmartNavLink_eventIsLinkEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSmartNavLink_eventIsLinkEnabled_Parms), &Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmartNavLink, nullptr, "IsLinkEnabled", nullptr, nullptr, sizeof(SBZSmartNavLink_eventIsLinkEnabled_Parms), Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics
	{
		struct SBZSmartNavLink_eventSetLinkEnabled_Parms
		{
			bool bInLinkEnabled;
		};
		static void NewProp_bInLinkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLinkEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled_SetBit(void* Obj)
	{
		((SBZSmartNavLink_eventSetLinkEnabled_Parms*)Obj)->bInLinkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled = { "bInLinkEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSmartNavLink_eventSetLinkEnabled_Parms), &Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmartNavLink, nullptr, "SetLinkEnabled", nullptr, nullptr, sizeof(SBZSmartNavLink_eventSetLinkEnabled_Parms), Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics
	{
		struct SBZSmartNavLink_eventSetNavArea_Parms
		{
			TSubclassOf<UNavArea>  AreaClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmartNavLink_eventSetNavArea_Parms, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::NewProp_AreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmartNavLink, nullptr, "SetNavArea", nullptr, nullptr, sizeof(SBZSmartNavLink_eventSetNavArea_Parms), Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSmartNavLink_NoRegister()
	{
		return ASBZSmartNavLink::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSmartNavLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableNavLinkWhenUsed_MetaData[];
#endif
		static void NewProp_bDisableNavLinkWhenUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableNavLinkWhenUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBlocked_MetaData[];
#endif
		static void NewProp_bCanBeBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NavLinkUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomMove_MetaData[];
#endif
		static void NewProp_bCustomMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkEnabled_MetaData[];
#endif
		static void NewProp_bLinkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkBlocked_MetaData[];
#endif
		static void NewProp_bLinkBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkInUse_MetaData[];
#endif
		static void NewProp_bLinkInUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkInUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBlockingCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedBlockingCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBlockingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedBlockingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRightPointOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultRightPointOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLeftPointOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLeftPointOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSmartNavLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSmartNavLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSmartNavLink_GetNavArea, "GetNavArea" }, // 1047423304
		{ &Z_Construct_UFunction_ASBZSmartNavLink_IsLinkEnabled, "IsLinkEnabled" }, // 1195872784
		{ &Z_Construct_UFunction_ASBZSmartNavLink_SetLinkEnabled, "SetLinkEnabled" }, // 3267002046
		{ &Z_Construct_UFunction_ASBZSmartNavLink_SetNavArea, "SetNavArea" }, // 3329648779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSmartNavLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_OnSmartLinkReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_OnSmartLinkReached = { "OnSmartLinkReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, OnSmartLinkReached), Z_Construct_UDelegateFunction_Starbreeze_SBZSmartLinkReachedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_OnSmartLinkReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_OnSmartLinkReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavigationLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavigationLink = { "NavigationLink", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, NavigationLink), Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavigationLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavigationLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed_SetBit(void* Obj)
	{
		((ASBZSmartNavLink*)Obj)->bDisableNavLinkWhenUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed = { "bDisableNavLinkWhenUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSmartNavLink), &Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked_SetBit(void* Obj)
	{
		((ASBZSmartNavLink*)Obj)->bCanBeBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked = { "bCanBeBlocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSmartNavLink), &Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavLinkUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavLinkUserId = { "NavLinkUserId", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, NavLinkUserId), METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavLinkUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavLinkUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove_SetBit(void* Obj)
	{
		((ASBZSmartNavLink*)Obj)->bCustomMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove = { "bCustomMove", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZSmartNavLink), &Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled_SetBit(void* Obj)
	{
		((ASBZSmartNavLink*)Obj)->bLinkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled = { "bLinkEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZSmartNavLink), &Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked_SetBit(void* Obj)
	{
		((ASBZSmartNavLink*)Obj)->bLinkBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked = { "bLinkBlocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZSmartNavLink), &Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse_SetBit(void* Obj)
	{
		((ASBZSmartNavLink*)Obj)->bLinkInUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse = { "bLinkInUse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZSmartNavLink), &Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingCharacter = { "AllowedBlockingCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, AllowedBlockingCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingController = { "AllowedBlockingController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, AllowedBlockingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultRightPointOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultRightPointOffset = { "DefaultRightPointOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, DefaultRightPointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultRightPointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultRightPointOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultLeftPointOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultLeftPointOffset = { "DefaultLeftPointOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, DefaultLeftPointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultLeftPointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultLeftPointOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmartNavLink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSmartNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmartNavLink, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_SpriteComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSmartNavLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_OnSmartLinkReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavigationLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bDisableNavLinkWhenUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCanBeBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_NavLinkUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bCustomMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_bLinkInUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_AllowedBlockingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultRightPointOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_DefaultLeftPointOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmartNavLink_Statics::NewProp_SpriteComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZSmartNavLink_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSmartNavLink, INavRelevantInterface), false },
			{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSmartNavLink, INavLinkCustomInterface), false },
			{ Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSmartNavLink, ISBZBlockableNavlinkInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSmartNavLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSmartNavLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSmartNavLink_Statics::ClassParams = {
		&ASBZSmartNavLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSmartNavLink_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSmartNavLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmartNavLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSmartNavLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSmartNavLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSmartNavLink, 358757971);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSmartNavLink>()
	{
		return ASBZSmartNavLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSmartNavLink(Z_Construct_UClass_ASBZSmartNavLink, &ASBZSmartNavLink::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSmartNavLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSmartNavLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
