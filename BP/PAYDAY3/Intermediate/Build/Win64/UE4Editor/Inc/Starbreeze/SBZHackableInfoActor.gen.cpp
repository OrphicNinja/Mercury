// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackableInfoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackableInfoActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableInfoActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableInfoActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocationInformation();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorState();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHackableInfoActor::execMulticast_ResetHackableActorToGenericHack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetHackableActorToGenericHack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableInfoActor::execOnHeistGoneLoud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistGoneLoud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableInfoActor::execResetHackableActorToGenericHack)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_GET_UBOOL(Z_Param_bKeepCustomMessage);
		P_GET_ENUM(ESBZHackableActorState,Z_Param_ResetState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHackableActorToGenericHack(Z_Param_InDuration,Z_Param_bKeepCustomMessage,ESBZHackableActorState(Z_Param_ResetState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZHackableInfoActor_BP_OnHackingInfoDone = FName(TEXT("BP_OnHackingInfoDone"));
	void ASBZHackableInfoActor::BP_OnHackingInfoDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableInfoActor_BP_OnHackingInfoDone),NULL);
	}
	static FName NAME_ASBZHackableInfoActor_BP_SetInformation = FName(TEXT("BP_SetInformation"));
	void ASBZHackableInfoActor::BP_SetInformation(FSBZLocationInformation const& OutLocationInformation)
	{
		SBZHackableInfoActor_eventBP_SetInformation_Parms Parms;
		Parms.OutLocationInformation=OutLocationInformation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableInfoActor_BP_SetInformation),&Parms);
	}
	static FName NAME_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack = FName(TEXT("Multicast_ResetHackableActorToGenericHack"));
	void ASBZHackableInfoActor::Multicast_ResetHackableActorToGenericHack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack),NULL);
	}
	void ASBZHackableInfoActor::StaticRegisterNativesASBZHackableInfoActor()
	{
		UClass* Class = ASBZHackableInfoActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ResetHackableActorToGenericHack", &ASBZHackableInfoActor::execMulticast_ResetHackableActorToGenericHack },
			{ "OnHeistGoneLoud", &ASBZHackableInfoActor::execOnHeistGoneLoud },
			{ "ResetHackableActorToGenericHack", &ASBZHackableInfoActor::execResetHackableActorToGenericHack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableInfoActor, nullptr, "BP_OnHackingInfoDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutLocationInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocationInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::NewProp_OutLocationInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::NewProp_OutLocationInformation = { "OutLocationInformation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableInfoActor_eventBP_SetInformation_Parms, OutLocationInformation), Z_Construct_UScriptStruct_FSBZLocationInformation, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::NewProp_OutLocationInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::NewProp_OutLocationInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::NewProp_OutLocationInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableInfoActor, nullptr, "BP_SetInformation", nullptr, nullptr, sizeof(SBZHackableInfoActor_eventBP_SetInformation_Parms), Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableInfoActor, nullptr, "Multicast_ResetHackableActorToGenericHack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableInfoActor, nullptr, "OnHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics
	{
		struct SBZHackableInfoActor_eventResetHackableActorToGenericHack_Parms
		{
			float InDuration;
			bool bKeepCustomMessage;
			ESBZHackableActorState ResetState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static void NewProp_bKeepCustomMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepCustomMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResetState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableInfoActor_eventResetHackableActorToGenericHack_Parms, InDuration), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration_MetaData)) };
	void Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage_SetBit(void* Obj)
	{
		((SBZHackableInfoActor_eventResetHackableActorToGenericHack_Parms*)Obj)->bKeepCustomMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage = { "bKeepCustomMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableInfoActor_eventResetHackableActorToGenericHack_Parms), &Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState = { "ResetState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableInfoActor_eventResetHackableActorToGenericHack_Parms, ResetState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableInfoActor, nullptr, "ResetHackableActorToGenericHack", nullptr, nullptr, sizeof(SBZHackableInfoActor_eventResetHackableActorToGenericHack_Parms), Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHackableInfoActor_NoRegister()
	{
		return ASBZHackableInfoActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHackableInfoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenResetToGenericHack_MetaData[];
#endif
		static void NewProp_bHasBeenResetToGenericHack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenResetToGenericHack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomInfoProcessText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomInfoProcessText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldResetOnHeistStateChange_MetaData[];
#endif
		static void NewProp_bShouldResetOnHeistStateChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldResetOnHeistStateChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSecondsAfterReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSecondsAfterReset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateToResetTo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateToResetTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateToResetTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldKeepCustomMessage_MetaData[];
#endif
		static void NewProp_bShouldKeepCustomMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldKeepCustomMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldResetToGenericHack_MetaData[];
#endif
		static void NewProp_bShouldResetToGenericHack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldResetToGenericHack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHackableInfoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZHackableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHackableInfoActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHackableInfoActor_BP_OnHackingInfoDone, "BP_OnHackingInfoDone" }, // 3344569813
		{ &Z_Construct_UFunction_ASBZHackableInfoActor_BP_SetInformation, "BP_SetInformation" }, // 358690310
		{ &Z_Construct_UFunction_ASBZHackableInfoActor_Multicast_ResetHackableActorToGenericHack, "Multicast_ResetHackableActorToGenericHack" }, // 1221308947
		{ &Z_Construct_UFunction_ASBZHackableInfoActor_OnHeistGoneLoud, "OnHeistGoneLoud" }, // 348947977
		{ &Z_Construct_UFunction_ASBZHackableInfoActor_ResetHackableActorToGenericHack, "ResetHackableActorToGenericHack" }, // 3033271076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackableInfoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack_SetBit(void* Obj)
	{
		((ASBZHackableInfoActor*)Obj)->bHasBeenResetToGenericHack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack = { "bHasBeenResetToGenericHack", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableInfoActor), &Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_CustomInfoProcessText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_CustomInfoProcessText = { "CustomInfoProcessText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableInfoActor, CustomInfoProcessText), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_CustomInfoProcessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_CustomInfoProcessText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange_SetBit(void* Obj)
	{
		((ASBZHackableInfoActor*)Obj)->bShouldResetOnHeistStateChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange = { "bShouldResetOnHeistStateChange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableInfoActor), &Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_DurationSecondsAfterReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_DurationSecondsAfterReset = { "DurationSecondsAfterReset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableInfoActor, DurationSecondsAfterReset), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_DurationSecondsAfterReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_DurationSecondsAfterReset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo = { "StateToResetTo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableInfoActor, StateToResetTo), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage_SetBit(void* Obj)
	{
		((ASBZHackableInfoActor*)Obj)->bShouldKeepCustomMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage = { "bShouldKeepCustomMessage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableInfoActor), &Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableInfoActor" },
		{ "ModuleRelativePath", "Public/SBZHackableInfoActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack_SetBit(void* Obj)
	{
		((ASBZHackableInfoActor*)Obj)->bShouldResetToGenericHack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack = { "bShouldResetToGenericHack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableInfoActor), &Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHackableInfoActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bHasBeenResetToGenericHack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_CustomInfoProcessText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetOnHeistStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_DurationSecondsAfterReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_StateToResetTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldKeepCustomMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableInfoActor_Statics::NewProp_bShouldResetToGenericHack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHackableInfoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHackableInfoActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHackableInfoActor_Statics::ClassParams = {
		&ASBZHackableInfoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHackableInfoActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHackableInfoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableInfoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHackableInfoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHackableInfoActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHackableInfoActor, 3333832631);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHackableInfoActor>()
	{
		return ASBZHackableInfoActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHackableInfoActor(Z_Construct_UClass_ASBZHackableInfoActor, &ASBZHackableInfoActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHackableInfoActor"), false, nullptr, nullptr, nullptr);

	void ASBZHackableInfoActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bHasBeenResetToGenericHack(TEXT("bHasBeenResetToGenericHack"));

		const bool bIsValid = true
			&& Name_bHasBeenResetToGenericHack == ClassReps[(int32)ENetFields_Private::bHasBeenResetToGenericHack].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZHackableInfoActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHackableInfoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
