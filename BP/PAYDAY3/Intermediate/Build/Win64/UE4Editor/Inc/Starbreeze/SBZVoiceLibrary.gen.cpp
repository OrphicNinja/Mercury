// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_BPOnDialogEnded_Delegate__DelegateSignature();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayDialogResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(USBZVoiceLibrary::execPlayDialog)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZDialogDataAsset,Z_Param_DialogDataAsset);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Performers);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDialogEnded);
		P_GET_OBJECT(AActor,Z_Param_DialogInstigator);
		P_GET_UBOOL(Z_Param_bCanBeQueued);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZPlayDialogResult*)Z_Param__Result=USBZVoiceLibrary::PlayDialog(Z_Param_WorldContextObject,Z_Param_DialogDataAsset,Z_Param_Out_Performers,FBPOnDialogEnded_Delegate(Z_Param_Out_OnDialogEnded),Z_Param_DialogInstigator,Z_Param_bCanBeQueued);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVoiceLibrary::execPlayDialogWithSuitablePlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZDialogDataAsset,Z_Param_DialogDataAsset);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDialogEnded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZPlayDialogResult*)Z_Param__Result=USBZVoiceLibrary::PlayDialogWithSuitablePlayers(Z_Param_WorldContextObject,Z_Param_DialogDataAsset,FBPOnDialogEnded_Delegate(Z_Param_Out_OnDialogEnded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVoiceLibrary::execSayCommentWithClosestHeisterToActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZVoiceCommentDataAsset,Z_Param_CommmentAsset);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bIncludePlayers);
		P_GET_UBOOL(Z_Param_bIncludeCrewAI);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WithinDistance);
		P_GET_UBOOL(Z_Param_bIsServerInstigated);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZVoiceLibrary::SayCommentWithClosestHeisterToActor(Z_Param_WorldContextObject,Z_Param_CommmentAsset,Z_Param_Actor,Z_Param_bIncludePlayers,Z_Param_bIncludeCrewAI,Z_Param_WithinDistance,Z_Param_bIsServerInstigated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVoiceLibrary::execSayCommentWithClosestHeisterToLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZVoiceCommentDataAsset,Z_Param_CommmentAsset);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_UBOOL(Z_Param_bIncludePlayers);
		P_GET_UBOOL(Z_Param_bIncludeCrewAI);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WithinDistance);
		P_GET_UBOOL(Z_Param_bIsServerInstigated);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZVoiceLibrary::SayCommentWithClosestHeisterToLocation(Z_Param_WorldContextObject,Z_Param_CommmentAsset,Z_Param_Out_Location,Z_Param_bIncludePlayers,Z_Param_bIncludeCrewAI,Z_Param_WithinDistance,Z_Param_bIsServerInstigated);
		P_NATIVE_END;
	}
	void USBZVoiceLibrary::StaticRegisterNativesUSBZVoiceLibrary()
	{
		UClass* Class = USBZVoiceLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayDialog", &USBZVoiceLibrary::execPlayDialog },
			{ "PlayDialogWithSuitablePlayers", &USBZVoiceLibrary::execPlayDialogWithSuitablePlayers },
			{ "SayCommentWithClosestHeisterToActor", &USBZVoiceLibrary::execSayCommentWithClosestHeisterToActor },
			{ "SayCommentWithClosestHeisterToLocation", &USBZVoiceLibrary::execSayCommentWithClosestHeisterToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics
	{
		struct SBZVoiceLibrary_eventPlayDialog_Parms
		{
			UObject* WorldContextObject;
			const USBZDialogDataAsset* DialogDataAsset;
			TArray<AActor*> Performers;
			FScriptDelegate OnDialogEnded;
			AActor* DialogInstigator;
			bool bCanBeQueued;
			ESBZPlayDialogResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogDataAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Performers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Performers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Performers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialogEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDialogEnded;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogInstigator;
		static void NewProp_bCanBeQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeQueued;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogDataAsset = { "DialogDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialog_Parms, DialogDataAsset), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogDataAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers_Inner = { "Performers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers = { "Performers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialog_Parms, Performers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_OnDialogEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_OnDialogEnded = { "OnDialogEnded", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialog_Parms, OnDialogEnded), Z_Construct_UDelegateFunction_Starbreeze_BPOnDialogEnded_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_OnDialogEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_OnDialogEnded_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogInstigator = { "DialogInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialog_Parms, DialogInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_bCanBeQueued_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventPlayDialog_Parms*)Obj)->bCanBeQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_bCanBeQueued = { "bCanBeQueued", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventPlayDialog_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_bCanBeQueued_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialog_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZPlayDialogResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_Performers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_OnDialogEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_DialogInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_bCanBeQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoiceLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVoiceLibrary, nullptr, "PlayDialog", nullptr, nullptr, sizeof(SBZVoiceLibrary_eventPlayDialog_Parms), Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics
	{
		struct SBZVoiceLibrary_eventPlayDialogWithSuitablePlayers_Parms
		{
			UObject* WorldContextObject;
			const USBZDialogDataAsset* DialogDataAsset;
			FScriptDelegate OnDialogEnded;
			ESBZPlayDialogResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialogEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDialogEnded;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialogWithSuitablePlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_DialogDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_DialogDataAsset = { "DialogDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialogWithSuitablePlayers_Parms, DialogDataAsset), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_DialogDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_DialogDataAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_OnDialogEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_OnDialogEnded = { "OnDialogEnded", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialogWithSuitablePlayers_Parms, OnDialogEnded), Z_Construct_UDelegateFunction_Starbreeze_BPOnDialogEnded_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_OnDialogEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_OnDialogEnded_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventPlayDialogWithSuitablePlayers_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZPlayDialogResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_DialogDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_OnDialogEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoiceLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVoiceLibrary, nullptr, "PlayDialogWithSuitablePlayers", nullptr, nullptr, sizeof(SBZVoiceLibrary_eventPlayDialogWithSuitablePlayers_Parms), Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics
	{
		struct SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms
		{
			UObject* WorldContextObject;
			const USBZVoiceCommentDataAsset* CommmentAsset;
			AActor* Actor;
			bool bIncludePlayers;
			bool bIncludeCrewAI;
			float WithinDistance;
			bool bIsServerInstigated;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommmentAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bIncludePlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayers;
		static void NewProp_bIncludeCrewAI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeCrewAI;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WithinDistance;
		static void NewProp_bIsServerInstigated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServerInstigated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_CommmentAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_CommmentAsset = { "CommmentAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms, CommmentAsset), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_CommmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_CommmentAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludePlayers_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms*)Obj)->bIncludePlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludePlayers = { "bIncludePlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludePlayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludeCrewAI_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms*)Obj)->bIncludeCrewAI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludeCrewAI = { "bIncludeCrewAI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludeCrewAI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_WithinDistance = { "WithinDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms, WithinDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIsServerInstigated_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms*)Obj)->bIsServerInstigated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIsServerInstigated = { "bIsServerInstigated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIsServerInstigated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_CommmentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIncludeCrewAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_WithinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::NewProp_bIsServerInstigated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoiceLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVoiceLibrary, nullptr, "SayCommentWithClosestHeisterToActor", nullptr, nullptr, sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToActor_Parms), Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics
	{
		struct SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms
		{
			UObject* WorldContextObject;
			const USBZVoiceCommentDataAsset* CommmentAsset;
			FVector Location;
			bool bIncludePlayers;
			bool bIncludeCrewAI;
			float WithinDistance;
			bool bIsServerInstigated;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommmentAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_bIncludePlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayers;
		static void NewProp_bIncludeCrewAI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeCrewAI;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WithinDistance;
		static void NewProp_bIsServerInstigated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServerInstigated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_CommmentAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_CommmentAsset = { "CommmentAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms, CommmentAsset), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_CommmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_CommmentAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludePlayers_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms*)Obj)->bIncludePlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludePlayers = { "bIncludePlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludePlayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludeCrewAI_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms*)Obj)->bIncludeCrewAI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludeCrewAI = { "bIncludeCrewAI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludeCrewAI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_WithinDistance = { "WithinDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms, WithinDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIsServerInstigated_SetBit(void* Obj)
	{
		((SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms*)Obj)->bIsServerInstigated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIsServerInstigated = { "bIsServerInstigated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms), &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIsServerInstigated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_CommmentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIncludeCrewAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_WithinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::NewProp_bIsServerInstigated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoiceLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVoiceLibrary, nullptr, "SayCommentWithClosestHeisterToLocation", nullptr, nullptr, sizeof(SBZVoiceLibrary_eventSayCommentWithClosestHeisterToLocation_Parms), Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVoiceLibrary_NoRegister()
	{
		return USBZVoiceLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoiceLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVoiceLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVoiceLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVoiceLibrary_PlayDialog, "PlayDialog" }, // 68573520
		{ &Z_Construct_UFunction_USBZVoiceLibrary_PlayDialogWithSuitablePlayers, "PlayDialogWithSuitablePlayers" }, // 2916505599
		{ &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToActor, "SayCommentWithClosestHeisterToActor" }, // 3857308185
		{ &Z_Construct_UFunction_USBZVoiceLibrary_SayCommentWithClosestHeisterToLocation, "SayCommentWithClosestHeisterToLocation" }, // 3561886987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVoiceLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoiceLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVoiceLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoiceLibrary_Statics::ClassParams = {
		&USBZVoiceLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVoiceLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoiceLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoiceLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoiceLibrary, 3628275219);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoiceLibrary>()
	{
		return USBZVoiceLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoiceLibrary(Z_Construct_UClass_USBZVoiceLibrary, &USBZVoiceLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoiceLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoiceLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
