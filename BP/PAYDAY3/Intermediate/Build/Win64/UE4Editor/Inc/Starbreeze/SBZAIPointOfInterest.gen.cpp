// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIPointOfInterest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIPointOfInterest() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execGetOwnedGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execHasAllMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIPointOfInterest::execOnOwnerDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAIPointOfInterest_OnInteracted = FName(TEXT("OnInteracted"));
	void ASBZAIPointOfInterest::OnInteracted(AActor* ActionInstigator, FGameplayTag const& InteractionTag)
	{
		SBZAIPointOfInterest_eventOnInteracted_Parms Parms;
		Parms.ActionInstigator=ActionInstigator;
		Parms.InteractionTag=InteractionTag;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIPointOfInterest_OnInteracted),&Parms);
	}
	void ASBZAIPointOfInterest::StaticRegisterNativesASBZAIPointOfInterest()
	{
		UClass* Class = ASBZAIPointOfInterest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnedGameplayTags", &ASBZAIPointOfInterest::execGetOwnedGameplayTags },
			{ "HasAllMatchingGameplayTags", &ASBZAIPointOfInterest::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", &ASBZAIPointOfInterest::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &ASBZAIPointOfInterest::execHasMatchingGameplayTag },
			{ "OnOwnerDestroyed", &ASBZAIPointOfInterest::execOnOwnerDestroyed },
			{ "SetAttractorInstigator", &ASBZAIPointOfInterest::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZAIPointOfInterest::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics
	{
		struct SBZAIPointOfInterest_eventGetOwnedGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventGetOwnedGameplayTags_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics
	{
		struct SBZAIPointOfInterest_eventHasAllMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIPointOfInterest_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIPointOfInterest_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics
	{
		struct SBZAIPointOfInterest_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIPointOfInterest_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIPointOfInterest_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics
	{
		struct SBZAIPointOfInterest_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIPointOfInterest_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIPointOfInterest_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_ActionInstigator = { "ActionInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventOnInteracted_Parms, ActionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_InteractionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_InteractionTag = { "InteractionTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventOnInteracted_Parms, InteractionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_InteractionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_InteractionTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_ActionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::NewProp_InteractionTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "OnInteracted", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventOnInteracted_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics
	{
		struct SBZAIPointOfInterest_eventOnOwnerDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventOnOwnerDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "OnOwnerDestroyed", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventOnOwnerDestroyed_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics
	{
		struct SBZAIPointOfInterest_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPointOfInterest_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics
	{
		struct SBZAIPointOfInterest_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZAIPointOfInterest_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIPointOfInterest_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIPointOfInterest_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIPointOfInterest_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterest, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZAIPointOfInterest_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister()
	{
		return ASBZAIPointOfInterest::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIPointOfInterest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoEnable_MetaData[];
#endif
		static void NewProp_bAutoEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoEnable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIPointOfInterest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIPointOfInterest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 1674615297
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 1718198834
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 49994317
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 3412254274
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_OnInteracted, "OnInteracted" }, // 2149237264
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_OnOwnerDestroyed, "OnOwnerDestroyed" }, // 2994200673
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_SetAttractorInstigator, "SetAttractorInstigator" }, // 862102773
		{ &Z_Construct_UFunction_ASBZAIPointOfInterest_SetEnabled, "SetEnabled" }, // 2466870238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIPointOfInterest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterest" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable_SetBit(void* Obj)
	{
		((ASBZAIPointOfInterest*)Obj)->bAutoEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable = { "bAutoEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIPointOfInterest), &Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterest" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterest, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterest, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_AttractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterest, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_SphereCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIPointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_bAutoEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_RoomVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterest_Statics::NewProp_SphereCollision,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIPointOfInterest, ISBZAIActionInteractableInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIPointOfInterest, IAISightTargetInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIPointOfInterest, IGameplayTagAssetInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIPointOfInterest, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIPointOfInterest, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIPointOfInterest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIPointOfInterest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIPointOfInterest_Statics::ClassParams = {
		&ASBZAIPointOfInterest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIPointOfInterest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIPointOfInterest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIPointOfInterest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIPointOfInterest, 405211169);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIPointOfInterest>()
	{
		return ASBZAIPointOfInterest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIPointOfInterest(Z_Construct_UClass_ASBZAIPointOfInterest, &ASBZAIPointOfInterest::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIPointOfInterest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIPointOfInterest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
