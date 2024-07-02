// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITowerSpecialComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITowerSpecialComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITowerSpecialComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITowerSpecialComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpecialAIComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIRefractorShield_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAITowerSpecialComponent::execMulticast_RetractShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RetractShield_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAITowerSpecialComponent::execOnHideOrderCompleted)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_Owner);
		P_GET_PROPERTY(FByteProperty,Z_Param_NodeResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideOrderCompleted(Z_Param_Order,Z_Param_Owner,EBTNodeResult::Type(Z_Param_NodeResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAITowerSpecialComponent::execOnRep_IsGlitchEffectActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsGlitchEffectActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAITowerSpecialComponent::execOnRep_RefractorShield)
	{
		P_GET_OBJECT(ASBZAIRefractorShield,Z_Param_OldRefractorShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RefractorShield(Z_Param_OldRefractorShield);
		P_NATIVE_END;
	}
	static FName NAME_USBZAITowerSpecialComponent_Multicast_RetractShield = FName(TEXT("Multicast_RetractShield"));
	void USBZAITowerSpecialComponent::Multicast_RetractShield()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAITowerSpecialComponent_Multicast_RetractShield),NULL);
	}
	void USBZAITowerSpecialComponent::StaticRegisterNativesUSBZAITowerSpecialComponent()
	{
		UClass* Class = USBZAITowerSpecialComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_RetractShield", &USBZAITowerSpecialComponent::execMulticast_RetractShield },
			{ "OnHideOrderCompleted", &USBZAITowerSpecialComponent::execOnHideOrderCompleted },
			{ "OnRep_IsGlitchEffectActive", &USBZAITowerSpecialComponent::execOnRep_IsGlitchEffectActive },
			{ "OnRep_RefractorShield", &USBZAITowerSpecialComponent::execOnRep_RefractorShield },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAITowerSpecialComponent, nullptr, "Multicast_RetractShield", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics
	{
		struct SBZAITowerSpecialComponent_eventOnHideOrderCompleted_Parms
		{
			USBZAIOrder* Order;
			APawn* Owner;
			TEnumAsByte<EBTNodeResult::Type> NodeResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAITowerSpecialComponent_eventOnHideOrderCompleted_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAITowerSpecialComponent_eventOnHideOrderCompleted_Parms, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAITowerSpecialComponent_eventOnHideOrderCompleted_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::NewProp_NodeResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAITowerSpecialComponent, nullptr, "OnHideOrderCompleted", nullptr, nullptr, sizeof(SBZAITowerSpecialComponent_eventOnHideOrderCompleted_Parms), Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAITowerSpecialComponent, nullptr, "OnRep_IsGlitchEffectActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics
	{
		struct SBZAITowerSpecialComponent_eventOnRep_RefractorShield_Parms
		{
			ASBZAIRefractorShield* OldRefractorShield;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldRefractorShield;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::NewProp_OldRefractorShield = { "OldRefractorShield", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAITowerSpecialComponent_eventOnRep_RefractorShield_Parms, OldRefractorShield), Z_Construct_UClass_ASBZAIRefractorShield_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::NewProp_OldRefractorShield,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAITowerSpecialComponent, nullptr, "OnRep_RefractorShield", nullptr, nullptr, sizeof(SBZAITowerSpecialComponent_eventOnRep_RefractorShield_Parms), Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAITowerSpecialComponent_NoRegister()
	{
		return USBZAITowerSpecialComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAITowerSpecialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShieldClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldBrokenComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldBrokenComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDeployedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldDeployedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractorShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefractorShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGlitchEffectActive_MetaData[];
#endif
		static void NewProp_bIsGlitchEffectActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGlitchEffectActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSpecialAIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAITowerSpecialComponent_Multicast_RetractShield, "Multicast_RetractShield" }, // 3065985218
		{ &Z_Construct_UFunction_USBZAITowerSpecialComponent_OnHideOrderCompleted, "OnHideOrderCompleted" }, // 715958058
		{ &Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_IsGlitchEffectActive, "OnRep_IsGlitchEffectActive" }, // 3334733176
		{ &Z_Construct_UFunction_USBZAITowerSpecialComponent_OnRep_RefractorShield, "OnRep_RefractorShield" }, // 1166942907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAITowerSpecialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITowerSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldClass = { "ShieldClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITowerSpecialComponent, ShieldClass), Z_Construct_UClass_ASBZAIRefractorShield_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldBrokenComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITowerSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldBrokenComment = { "ShieldBrokenComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITowerSpecialComponent, ShieldBrokenComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldBrokenComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldBrokenComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldDeployedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITowerSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldDeployedComment = { "ShieldDeployedComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITowerSpecialComponent, ShieldDeployedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldDeployedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldDeployedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_RefractorShield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITowerSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_RefractorShield = { "RefractorShield", "OnRep_RefractorShield", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITowerSpecialComponent, RefractorShield), Z_Construct_UClass_ASBZAIRefractorShield_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_RefractorShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_RefractorShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITowerSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAITowerSpecialComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive_SetBit(void* Obj)
	{
		((USBZAITowerSpecialComponent*)Obj)->bIsGlitchEffectActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive = { "bIsGlitchEffectActive", "OnRep_IsGlitchEffectActive", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAITowerSpecialComponent), &Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldBrokenComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_ShieldDeployedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_RefractorShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::NewProp_bIsGlitchEffectActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAITowerSpecialComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::ClassParams = {
		&USBZAITowerSpecialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAITowerSpecialComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAITowerSpecialComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAITowerSpecialComponent, 1039803039);
	template<> STARBREEZE_API UClass* StaticClass<USBZAITowerSpecialComponent>()
	{
		return USBZAITowerSpecialComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAITowerSpecialComponent(Z_Construct_UClass_USBZAITowerSpecialComponent, &USBZAITowerSpecialComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAITowerSpecialComponent"), false, nullptr, nullptr, nullptr);

	void USBZAITowerSpecialComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RefractorShield(TEXT("RefractorShield"));
		static const FName Name_bIsGlitchEffectActive(TEXT("bIsGlitchEffectActive"));

		const bool bIsValid = true
			&& Name_RefractorShield == ClassReps[(int32)ENetFields_Private::RefractorShield].Property->GetFName()
			&& Name_bIsGlitchEffectActive == ClassReps[(int32)ENetFields_Private::bIsGlitchEffectActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZAITowerSpecialComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAITowerSpecialComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
