// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackableCodeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackableCodeActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableCodeActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableCodeActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorState();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHackableCodeActor::execMulticast_ResetHackableActorToGenericHack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetHackableActorToGenericHack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableCodeActor::execOnHeistGoneLoud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistGoneLoud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableCodeActor::execResetHackableActorToGenericHack)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_GET_UBOOL(Z_Param_bKeepCustomMessage);
		P_GET_ENUM(ESBZHackableActorState,Z_Param_ResetState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHackableActorToGenericHack(Z_Param_InDuration,Z_Param_bKeepCustomMessage,ESBZHackableActorState(Z_Param_ResetState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZHackableCodeActor_BP_OnCodeHackingDone = FName(TEXT("BP_OnCodeHackingDone"));
	void ASBZHackableCodeActor::BP_OnCodeHackingDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableCodeActor_BP_OnCodeHackingDone),NULL);
	}
	static FName NAME_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack = FName(TEXT("Multicast_ResetHackableActorToGenericHack"));
	void ASBZHackableCodeActor::Multicast_ResetHackableActorToGenericHack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack),NULL);
	}
	void ASBZHackableCodeActor::StaticRegisterNativesASBZHackableCodeActor()
	{
		UClass* Class = ASBZHackableCodeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ResetHackableActorToGenericHack", &ASBZHackableCodeActor::execMulticast_ResetHackableActorToGenericHack },
			{ "OnHeistGoneLoud", &ASBZHackableCodeActor::execOnHeistGoneLoud },
			{ "ResetHackableActorToGenericHack", &ASBZHackableCodeActor::execResetHackableActorToGenericHack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableCodeActor, nullptr, "BP_OnCodeHackingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableCodeActor, nullptr, "Multicast_ResetHackableActorToGenericHack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableCodeActor, nullptr, "OnHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics
	{
		struct SBZHackableCodeActor_eventResetHackableActorToGenericHack_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableCodeActor_eventResetHackableActorToGenericHack_Parms, InDuration), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration_MetaData)) };
	void Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage_SetBit(void* Obj)
	{
		((SBZHackableCodeActor_eventResetHackableActorToGenericHack_Parms*)Obj)->bKeepCustomMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage = { "bKeepCustomMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableCodeActor_eventResetHackableActorToGenericHack_Parms), &Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState = { "ResetState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableCodeActor_eventResetHackableActorToGenericHack_Parms, ResetState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_InDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_bKeepCustomMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::NewProp_ResetState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableCodeActor, nullptr, "ResetHackableActorToGenericHack", nullptr, nullptr, sizeof(SBZHackableCodeActor_eventResetHackableActorToGenericHack_Parms), Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHackableCodeActor_NoRegister()
	{
		return ASBZHackableCodeActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHackableCodeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Codes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Codes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCodeProcessText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomCodeProcessText;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsResetToGenericHack_MetaData[];
#endif
		static void NewProp_bIsResetToGenericHack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsResetToGenericHack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHackableCodeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZHackableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHackableCodeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHackableCodeActor_BP_OnCodeHackingDone, "BP_OnCodeHackingDone" }, // 922510659
		{ &Z_Construct_UFunction_ASBZHackableCodeActor_Multicast_ResetHackableActorToGenericHack, "Multicast_ResetHackableActorToGenericHack" }, // 1258025304
		{ &Z_Construct_UFunction_ASBZHackableCodeActor_OnHeistGoneLoud, "OnHeistGoneLoud" }, // 3943808591
		{ &Z_Construct_UFunction_ASBZHackableCodeActor_ResetHackableActorToGenericHack, "ResetHackableActorToGenericHack" }, // 1610611492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackableCodeActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes_Inner = { "Codes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes = { "Codes", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableCodeActor, Codes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_NumberOfCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_NumberOfCodes = { "NumberOfCodes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableCodeActor, NumberOfCodes), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_NumberOfCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_NumberOfCodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_CustomCodeProcessText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_CustomCodeProcessText = { "CustomCodeProcessText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableCodeActor, CustomCodeProcessText), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_CustomCodeProcessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_CustomCodeProcessText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange_SetBit(void* Obj)
	{
		((ASBZHackableCodeActor*)Obj)->bShouldResetOnHeistStateChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange = { "bShouldResetOnHeistStateChange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableCodeActor), &Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_DurationSecondsAfterReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_DurationSecondsAfterReset = { "DurationSecondsAfterReset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableCodeActor, DurationSecondsAfterReset), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_DurationSecondsAfterReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_DurationSecondsAfterReset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo = { "StateToResetTo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableCodeActor, StateToResetTo), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage_SetBit(void* Obj)
	{
		((ASBZHackableCodeActor*)Obj)->bShouldKeepCustomMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage = { "bShouldKeepCustomMessage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableCodeActor), &Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack_SetBit(void* Obj)
	{
		((ASBZHackableCodeActor*)Obj)->bShouldResetToGenericHack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack = { "bShouldResetToGenericHack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableCodeActor), &Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableCodeActor" },
		{ "ModuleRelativePath", "Public/SBZHackableCodeActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack_SetBit(void* Obj)
	{
		((ASBZHackableCodeActor*)Obj)->bIsResetToGenericHack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack = { "bIsResetToGenericHack", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableCodeActor), &Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHackableCodeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_Codes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_NumberOfCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_CustomCodeProcessText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetOnHeistStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_DurationSecondsAfterReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_StateToResetTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldKeepCustomMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bShouldResetToGenericHack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableCodeActor_Statics::NewProp_bIsResetToGenericHack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHackableCodeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHackableCodeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHackableCodeActor_Statics::ClassParams = {
		&ASBZHackableCodeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHackableCodeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHackableCodeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableCodeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHackableCodeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHackableCodeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHackableCodeActor, 2361063254);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHackableCodeActor>()
	{
		return ASBZHackableCodeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHackableCodeActor(Z_Construct_UClass_ASBZHackableCodeActor, &ASBZHackableCodeActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHackableCodeActor"), false, nullptr, nullptr, nullptr);

	void ASBZHackableCodeActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Codes(TEXT("Codes"));
		static const FName Name_bIsResetToGenericHack(TEXT("bIsResetToGenericHack"));

		const bool bIsValid = true
			&& Name_Codes == ClassReps[(int32)ENetFields_Private::Codes].Property->GetFName()
			&& Name_bIsResetToGenericHack == ClassReps[(int32)ENetFields_Private::bIsResetToGenericHack].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZHackableCodeActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHackableCodeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
