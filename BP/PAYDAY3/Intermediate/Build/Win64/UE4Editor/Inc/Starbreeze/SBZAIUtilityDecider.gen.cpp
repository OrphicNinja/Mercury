// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityDecider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityDecider() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIUtilityDecider::execOnActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIUtilityDecider::execOnDeactivated)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NodeResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeactivated(EBTNodeResult::Type(Z_Param_NodeResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIUtilityDecider::execOnDeselected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeselected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIUtilityDecider::execOnReselected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReselected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIUtilityDecider::execOnSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelected();
		P_NATIVE_END;
	}
	static FName NAME_USBZAIUtilityDecider_OnActivatedBP = FName(TEXT("OnActivatedBP"));
	void USBZAIUtilityDecider::OnActivatedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityDecider_OnActivatedBP),NULL);
	}
	static FName NAME_USBZAIUtilityDecider_OnDeactivatedBP = FName(TEXT("OnDeactivatedBP"));
	void USBZAIUtilityDecider::OnDeactivatedBP(TEnumAsByte<EBTNodeResult::Type> const& NodeResult)
	{
		SBZAIUtilityDecider_eventOnDeactivatedBP_Parms Parms;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityDecider_OnDeactivatedBP),&Parms);
	}
	static FName NAME_USBZAIUtilityDecider_OnDeselectedBP = FName(TEXT("OnDeselectedBP"));
	void USBZAIUtilityDecider::OnDeselectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityDecider_OnDeselectedBP),NULL);
	}
	static FName NAME_USBZAIUtilityDecider_OnInitBP = FName(TEXT("OnInitBP"));
	void USBZAIUtilityDecider::OnInitBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityDecider_OnInitBP),NULL);
	}
	static FName NAME_USBZAIUtilityDecider_OnReselectedBP = FName(TEXT("OnReselectedBP"));
	void USBZAIUtilityDecider::OnReselectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityDecider_OnReselectedBP),NULL);
	}
	static FName NAME_USBZAIUtilityDecider_OnSelectedBP = FName(TEXT("OnSelectedBP"));
	void USBZAIUtilityDecider::OnSelectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityDecider_OnSelectedBP),NULL);
	}
	void USBZAIUtilityDecider::StaticRegisterNativesUSBZAIUtilityDecider()
	{
		UClass* Class = USBZAIUtilityDecider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActivated", &USBZAIUtilityDecider::execOnActivated },
			{ "OnDeactivated", &USBZAIUtilityDecider::execOnDeactivated },
			{ "OnDeselected", &USBZAIUtilityDecider::execOnDeselected },
			{ "OnReselected", &USBZAIUtilityDecider::execOnReselected },
			{ "OnSelected", &USBZAIUtilityDecider::execOnSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnActivatedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics
	{
		struct SBZAIUtilityDecider_eventOnDeactivated_Parms
		{
			TEnumAsByte<EBTNodeResult::Type> NodeResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIUtilityDecider_eventOnDeactivated_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::NewProp_NodeResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnDeactivated", nullptr, nullptr, sizeof(SBZAIUtilityDecider_eventOnDeactivated_Parms), Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::NewProp_NodeResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIUtilityDecider_eventOnDeactivatedBP_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::NewProp_NodeResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::NewProp_NodeResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::NewProp_NodeResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnDeactivatedBP", nullptr, nullptr, sizeof(SBZAIUtilityDecider_eventOnDeactivatedBP_Parms), Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnDeselected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnDeselectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnInitBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnReselected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnReselectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider, nullptr, "OnSelectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_NoRegister()
	{
		return USBZAIUtilityDecider::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityDecider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scorers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scorers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scorers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scorers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeScorers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlternativeScorers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeScorers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlternativeScorers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bonus_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bonus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsToAddOnActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagsToAddOnActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUtility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUtility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityDecider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIUtilityDecider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnActivated, "OnActivated" }, // 2374887135
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnActivatedBP, "OnActivatedBP" }, // 2177745179
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivated, "OnDeactivated" }, // 3638983361
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnDeactivatedBP, "OnDeactivatedBP" }, // 511025656
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselected, "OnDeselected" }, // 1539117589
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnDeselectedBP, "OnDeselectedBP" }, // 280699196
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnInitBP, "OnInitBP" }, // 729601033
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnReselected, "OnReselected" }, // 1520053225
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnReselectedBP, "OnReselectedBP" }, // 4085539530
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnSelected, "OnSelected" }, // 1541210963
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_OnSelectedBP, "OnSelectedBP" }, // 3672324839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityDecider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_Inner = { "Scorers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIUtilityScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers = { "Scorers", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, Scorers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_Inner = { "AlternativeScorers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIUtilityScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers = { "AlternativeScorers", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, AlternativeScorers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_Inner = { "Bonus", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIUtilityScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus = { "Bonus", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, Bonus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIUtilityScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Behavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, Behavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Behavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, Category), Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AIController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_TagsToAddOnActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_TagsToAddOnActivated = { "TagsToAddOnActivated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, TagsToAddOnActivated), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_TagsToAddOnActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_TagsToAddOnActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((USBZAIUtilityDecider*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIUtilityDecider), &Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_MaxUtility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_MaxUtility = { "MaxUtility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider, MaxUtility), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_MaxUtility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_MaxUtility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityDecider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Scorers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AlternativeScorers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Behavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_TagsToAddOnActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Statics::NewProp_MaxUtility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityDecider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityDecider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityDecider_Statics::ClassParams = {
		&USBZAIUtilityDecider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIUtilityDecider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::PropPointers),
		0,
		0x008010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityDecider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityDecider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityDecider, 1308400507);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityDecider>()
	{
		return USBZAIUtilityDecider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityDecider(Z_Construct_UClass_USBZAIUtilityDecider, &USBZAIUtilityDecider::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityDecider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityDecider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
