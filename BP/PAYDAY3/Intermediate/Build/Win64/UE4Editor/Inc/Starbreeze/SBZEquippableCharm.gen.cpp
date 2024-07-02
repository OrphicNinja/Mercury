// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableCharm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableCharm() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippableCharm_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippableCharm();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZEquippableCharm::execEquippableDropped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquippableDropped(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execEquippableEquipped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquippableEquipped(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execEquippableUndropped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquippableUndropped(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execEquippableUnequipped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquippableUnequipped(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execEquippableUsed)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquippableUsed(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execGetEquippableTimeLastUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEquippableTimeLastUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execGetOwningCharacterVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOwningCharacterVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execOnEquippableDropped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquippableDropped_Implementation(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execOnEquippableEquipped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquippableEquipped_Implementation(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execOnEquippableUndropped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquippableUndropped_Implementation(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execOnEquippableUnequipped)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquippableUnequipped_Implementation(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execOnEquippableUsed)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquippableUsed_Implementation(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execOnParentDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParentDestroyed(Z_Param_DestroyedParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execResetMeshProperties)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Reference);
		P_GET_OBJECT(USBZOutlineComponent,Z_Param_OutlineComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMeshProperties(Z_Param_Reference,Z_Param_OutlineComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execSetOwningCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execSetOwningEquippable)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningEquippable(Z_Param_Equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZEquippableCharm::execUpdateMeshPropertiesFrom)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Reference);
		P_GET_OBJECT(USBZOutlineComponent,Z_Param_OutlineComponent);
		P_GET_UBOOL(Z_Param_bIsReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshPropertiesFrom(Z_Param_Reference,Z_Param_OutlineComponent,Z_Param_bIsReset);
		P_NATIVE_END;
	}
	static FName NAME_ASBZEquippableCharm_OnEquippableDropped = FName(TEXT("OnEquippableDropped"));
	void ASBZEquippableCharm::OnEquippableDropped(const ASBZEquippable* Equippable)
	{
		SBZEquippableCharm_eventOnEquippableDropped_Parms Parms;
		Parms.Equippable=Equippable;
		ProcessEvent(FindFunctionChecked(NAME_ASBZEquippableCharm_OnEquippableDropped),&Parms);
	}
	static FName NAME_ASBZEquippableCharm_OnEquippableEquipped = FName(TEXT("OnEquippableEquipped"));
	void ASBZEquippableCharm::OnEquippableEquipped(const ASBZEquippable* Equippable)
	{
		SBZEquippableCharm_eventOnEquippableEquipped_Parms Parms;
		Parms.Equippable=Equippable;
		ProcessEvent(FindFunctionChecked(NAME_ASBZEquippableCharm_OnEquippableEquipped),&Parms);
	}
	static FName NAME_ASBZEquippableCharm_OnEquippableUndropped = FName(TEXT("OnEquippableUndropped"));
	void ASBZEquippableCharm::OnEquippableUndropped(const ASBZEquippable* Equippable)
	{
		SBZEquippableCharm_eventOnEquippableUndropped_Parms Parms;
		Parms.Equippable=Equippable;
		ProcessEvent(FindFunctionChecked(NAME_ASBZEquippableCharm_OnEquippableUndropped),&Parms);
	}
	static FName NAME_ASBZEquippableCharm_OnEquippableUnequipped = FName(TEXT("OnEquippableUnequipped"));
	void ASBZEquippableCharm::OnEquippableUnequipped(const ASBZEquippable* Equippable)
	{
		SBZEquippableCharm_eventOnEquippableUnequipped_Parms Parms;
		Parms.Equippable=Equippable;
		ProcessEvent(FindFunctionChecked(NAME_ASBZEquippableCharm_OnEquippableUnequipped),&Parms);
	}
	static FName NAME_ASBZEquippableCharm_OnEquippableUsed = FName(TEXT("OnEquippableUsed"));
	void ASBZEquippableCharm::OnEquippableUsed(const ASBZEquippable* Equippable)
	{
		SBZEquippableCharm_eventOnEquippableUsed_Parms Parms;
		Parms.Equippable=Equippable;
		ProcessEvent(FindFunctionChecked(NAME_ASBZEquippableCharm_OnEquippableUsed),&Parms);
	}
	void ASBZEquippableCharm::StaticRegisterNativesASBZEquippableCharm()
	{
		UClass* Class = ASBZEquippableCharm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquippableDropped", &ASBZEquippableCharm::execEquippableDropped },
			{ "EquippableEquipped", &ASBZEquippableCharm::execEquippableEquipped },
			{ "EquippableUndropped", &ASBZEquippableCharm::execEquippableUndropped },
			{ "EquippableUnequipped", &ASBZEquippableCharm::execEquippableUnequipped },
			{ "EquippableUsed", &ASBZEquippableCharm::execEquippableUsed },
			{ "GetEquippableTimeLastUsed", &ASBZEquippableCharm::execGetEquippableTimeLastUsed },
			{ "GetOwningCharacterVelocity", &ASBZEquippableCharm::execGetOwningCharacterVelocity },
			{ "OnEquippableDropped", &ASBZEquippableCharm::execOnEquippableDropped },
			{ "OnEquippableEquipped", &ASBZEquippableCharm::execOnEquippableEquipped },
			{ "OnEquippableUndropped", &ASBZEquippableCharm::execOnEquippableUndropped },
			{ "OnEquippableUnequipped", &ASBZEquippableCharm::execOnEquippableUnequipped },
			{ "OnEquippableUsed", &ASBZEquippableCharm::execOnEquippableUsed },
			{ "OnParentDestroyed", &ASBZEquippableCharm::execOnParentDestroyed },
			{ "ResetMeshProperties", &ASBZEquippableCharm::execResetMeshProperties },
			{ "SetOwningCharacter", &ASBZEquippableCharm::execSetOwningCharacter },
			{ "SetOwningEquippable", &ASBZEquippableCharm::execSetOwningEquippable },
			{ "UpdateMeshPropertiesFrom", &ASBZEquippableCharm::execUpdateMeshPropertiesFrom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics
	{
		struct SBZEquippableCharm_eventEquippableDropped_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventEquippableDropped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "EquippableDropped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventEquippableDropped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics
	{
		struct SBZEquippableCharm_eventEquippableEquipped_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventEquippableEquipped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "EquippableEquipped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventEquippableEquipped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics
	{
		struct SBZEquippableCharm_eventEquippableUndropped_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventEquippableUndropped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "EquippableUndropped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventEquippableUndropped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics
	{
		struct SBZEquippableCharm_eventEquippableUnequipped_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventEquippableUnequipped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "EquippableUnequipped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventEquippableUnequipped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics
	{
		struct SBZEquippableCharm_eventEquippableUsed_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventEquippableUsed_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "EquippableUsed", nullptr, nullptr, sizeof(SBZEquippableCharm_eventEquippableUsed_Parms), Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics
	{
		struct SBZEquippableCharm_eventGetEquippableTimeLastUsed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventGetEquippableTimeLastUsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "GetEquippableTimeLastUsed", nullptr, nullptr, sizeof(SBZEquippableCharm_eventGetEquippableTimeLastUsed_Parms), Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics
	{
		struct SBZEquippableCharm_eventGetOwningCharacterVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventGetOwningCharacterVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "GetOwningCharacterVelocity", nullptr, nullptr, sizeof(SBZEquippableCharm_eventGetOwningCharacterVelocity_Parms), Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventOnEquippableDropped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "OnEquippableDropped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventOnEquippableDropped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventOnEquippableEquipped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "OnEquippableEquipped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventOnEquippableEquipped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventOnEquippableUndropped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "OnEquippableUndropped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventOnEquippableUndropped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventOnEquippableUnequipped_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "OnEquippableUnequipped", nullptr, nullptr, sizeof(SBZEquippableCharm_eventOnEquippableUnequipped_Parms), Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventOnEquippableUsed_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "OnEquippableUsed", nullptr, nullptr, sizeof(SBZEquippableCharm_eventOnEquippableUsed_Parms), Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics
	{
		struct SBZEquippableCharm_eventOnParentDestroyed_Parms
		{
			AActor* DestroyedParent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::NewProp_DestroyedParent = { "DestroyedParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventOnParentDestroyed_Parms, DestroyedParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::NewProp_DestroyedParent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "OnParentDestroyed", nullptr, nullptr, sizeof(SBZEquippableCharm_eventOnParentDestroyed_Parms), Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics
	{
		struct SBZEquippableCharm_eventResetMeshProperties_Parms
		{
			const UMeshComponent* Reference;
			USBZOutlineComponent* OutlineComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_Reference_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventResetMeshProperties_Parms, Reference), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_Reference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_Reference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventResetMeshProperties_Parms, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_OutlineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_Reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::NewProp_OutlineComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "ResetMeshProperties", nullptr, nullptr, sizeof(SBZEquippableCharm_eventResetMeshProperties_Parms), Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics
	{
		struct SBZEquippableCharm_eventSetOwningCharacter_Parms
		{
			const ASBZCharacter* Character;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventSetOwningCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "SetOwningCharacter", nullptr, nullptr, sizeof(SBZEquippableCharm_eventSetOwningCharacter_Parms), Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics
	{
		struct SBZEquippableCharm_eventSetOwningEquippable_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventSetOwningEquippable_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "SetOwningEquippable", nullptr, nullptr, sizeof(SBZEquippableCharm_eventSetOwningEquippable_Parms), Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics
	{
		struct SBZEquippableCharm_eventUpdateMeshPropertiesFrom_Parms
		{
			const UMeshComponent* Reference;
			USBZOutlineComponent* OutlineComponent;
			bool bIsReset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
		static void NewProp_bIsReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_Reference_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventUpdateMeshPropertiesFrom_Parms, Reference), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_Reference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_Reference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippableCharm_eventUpdateMeshPropertiesFrom_Parms, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_OutlineComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_bIsReset_SetBit(void* Obj)
	{
		((SBZEquippableCharm_eventUpdateMeshPropertiesFrom_Parms*)Obj)->bIsReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_bIsReset = { "bIsReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZEquippableCharm_eventUpdateMeshPropertiesFrom_Parms), &Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_bIsReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_Reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::NewProp_bIsReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippableCharm, nullptr, "UpdateMeshPropertiesFrom", nullptr, nullptr, sizeof(SBZEquippableCharm_eventUpdateMeshPropertiesFrom_Parms), Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZEquippableCharm_NoRegister()
	{
		return ASBZEquippableCharm::StaticClass();
	}
	struct Z_Construct_UClass_ASBZEquippableCharm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningEquippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningEquippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZEquippableCharm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZEquippableCharm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZEquippableCharm_EquippableDropped, "EquippableDropped" }, // 3662794823
		{ &Z_Construct_UFunction_ASBZEquippableCharm_EquippableEquipped, "EquippableEquipped" }, // 231600632
		{ &Z_Construct_UFunction_ASBZEquippableCharm_EquippableUndropped, "EquippableUndropped" }, // 1926584900
		{ &Z_Construct_UFunction_ASBZEquippableCharm_EquippableUnequipped, "EquippableUnequipped" }, // 2905569299
		{ &Z_Construct_UFunction_ASBZEquippableCharm_EquippableUsed, "EquippableUsed" }, // 79223431
		{ &Z_Construct_UFunction_ASBZEquippableCharm_GetEquippableTimeLastUsed, "GetEquippableTimeLastUsed" }, // 629219252
		{ &Z_Construct_UFunction_ASBZEquippableCharm_GetOwningCharacterVelocity, "GetOwningCharacterVelocity" }, // 412508259
		{ &Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableDropped, "OnEquippableDropped" }, // 2694133673
		{ &Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableEquipped, "OnEquippableEquipped" }, // 2536916716
		{ &Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUndropped, "OnEquippableUndropped" }, // 1912212858
		{ &Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUnequipped, "OnEquippableUnequipped" }, // 3008547963
		{ &Z_Construct_UFunction_ASBZEquippableCharm_OnEquippableUsed, "OnEquippableUsed" }, // 634158786
		{ &Z_Construct_UFunction_ASBZEquippableCharm_OnParentDestroyed, "OnParentDestroyed" }, // 884927591
		{ &Z_Construct_UFunction_ASBZEquippableCharm_ResetMeshProperties, "ResetMeshProperties" }, // 2835813514
		{ &Z_Construct_UFunction_ASBZEquippableCharm_SetOwningCharacter, "SetOwningCharacter" }, // 2381335457
		{ &Z_Construct_UFunction_ASBZEquippableCharm_SetOwningEquippable, "SetOwningEquippable" }, // 990647743
		{ &Z_Construct_UFunction_ASBZEquippableCharm_UpdateMeshPropertiesFrom, "UpdateMeshPropertiesFrom" }, // 3686425732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippableCharm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippableCharm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableCharm" },
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippableCharm, OwningCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningEquippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableCharm" },
		{ "ModuleRelativePath", "Public/SBZEquippableCharm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningEquippable = { "OwningEquippable", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippableCharm, OwningEquippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningEquippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningEquippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZEquippableCharm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippableCharm_Statics::NewProp_OwningEquippable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZEquippableCharm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZEquippableCharm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZEquippableCharm_Statics::ClassParams = {
		&ASBZEquippableCharm::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZEquippableCharm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippableCharm_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZEquippableCharm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippableCharm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZEquippableCharm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZEquippableCharm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZEquippableCharm, 547988394);
	template<> STARBREEZE_API UClass* StaticClass<ASBZEquippableCharm>()
	{
		return ASBZEquippableCharm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZEquippableCharm(Z_Construct_UClass_ASBZEquippableCharm, &ASBZEquippableCharm::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZEquippableCharm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZEquippableCharm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
