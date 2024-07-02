// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerLibrary::execApplyCameraFeedbackToLocalPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<USBZLocalPlayerFeedback> ,Z_Param_Out_FeedbackClass);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_PROPERTY(FIntProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZPlayerLibrary::ApplyCameraFeedbackToLocalPlayer(Z_Param_WorldContextObject,Z_Param_Out_FeedbackClass,Z_Param_Out_Origin,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetAllSBZPlayerCharacters)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZPlayerCharacter*>*)Z_Param__Result=USBZPlayerLibrary::GetAllSBZPlayerCharacters(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetClosestPlayerToActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT_REF(ASBZPlayerCharacter,Z_Param_Out_PlayerCharacter);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZPlayerLibrary::GetClosestPlayerToActor(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Out_PlayerCharacter,Z_Param_Out_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetClosestPlayerToLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_OBJECT_REF(ASBZPlayerCharacter,Z_Param_Out_PlayerCharacter);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZPlayerLibrary::GetClosestPlayerToLocation(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Out_PlayerCharacter,Z_Param_Out_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetLocalPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=USBZPlayerLibrary::GetLocalPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetLocalPlayerPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=USBZPlayerLibrary::GetLocalPlayerPawn(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetLocalPlayerState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZPlayerState**)Z_Param__Result=USBZPlayerLibrary::GetLocalPlayerState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetNumAlivePlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZPlayerLibrary::GetNumAlivePlayers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetNumConnectedPlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZPlayerLibrary::GetNumConnectedPlayers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetRandomPlayerCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZPlayerCharacter**)Z_Param__Result=USBZPlayerLibrary::GetRandomPlayerCharacter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execGetRandomPlayerCharacterFromStream)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZPlayerCharacter**)Z_Param__Result=USBZPlayerLibrary::GetRandomPlayerCharacterFromStream(Z_Param_WorldContextObject,Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerLibrary::execIsPlayerInRange)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZPlayerLibrary::IsPlayerInRange(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Range);
		P_NATIVE_END;
	}
	void USBZPlayerLibrary::StaticRegisterNativesUSBZPlayerLibrary()
	{
		UClass* Class = USBZPlayerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCameraFeedbackToLocalPlayer", &USBZPlayerLibrary::execApplyCameraFeedbackToLocalPlayer },
			{ "GetAllSBZPlayerCharacters", &USBZPlayerLibrary::execGetAllSBZPlayerCharacters },
			{ "GetClosestPlayerToActor", &USBZPlayerLibrary::execGetClosestPlayerToActor },
			{ "GetClosestPlayerToLocation", &USBZPlayerLibrary::execGetClosestPlayerToLocation },
			{ "GetLocalPlayerController", &USBZPlayerLibrary::execGetLocalPlayerController },
			{ "GetLocalPlayerPawn", &USBZPlayerLibrary::execGetLocalPlayerPawn },
			{ "GetLocalPlayerState", &USBZPlayerLibrary::execGetLocalPlayerState },
			{ "GetNumAlivePlayers", &USBZPlayerLibrary::execGetNumAlivePlayers },
			{ "GetNumConnectedPlayers", &USBZPlayerLibrary::execGetNumConnectedPlayers },
			{ "GetRandomPlayerCharacter", &USBZPlayerLibrary::execGetRandomPlayerCharacter },
			{ "GetRandomPlayerCharacterFromStream", &USBZPlayerLibrary::execGetRandomPlayerCharacterFromStream },
			{ "IsPlayerInRange", &USBZPlayerLibrary::execIsPlayerInRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics
	{
		struct SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<USBZLocalPlayerFeedback>  FeedbackClass;
			FVector Origin;
			int32 Range;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_FeedbackClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_FeedbackClass = { "FeedbackClass", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms, FeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_FeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_FeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms, Range), METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_FeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "ApplyCameraFeedbackToLocalPlayer", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventApplyCameraFeedbackToLocalPlayer_Parms), Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics
	{
		struct SBZPlayerLibrary_eventGetAllSBZPlayerCharacters_Parms
		{
			const UObject* WorldContextObject;
			TArray<ASBZPlayerCharacter*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetAllSBZPlayerCharacters_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetAllSBZPlayerCharacters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetAllSBZPlayerCharacters", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetAllSBZPlayerCharacters_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics
	{
		struct SBZPlayerLibrary_eventGetClosestPlayerToActor_Parms
		{
			const UObject* WorldContextObject;
			const AActor* Actor;
			ASBZPlayerCharacter* PlayerCharacter;
			float Distance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToActor_Parms, PlayerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToActor_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetClosestPlayerToActor", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetClosestPlayerToActor_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics
	{
		struct SBZPlayerLibrary_eventGetClosestPlayerToLocation_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			ASBZPlayerCharacter* PlayerCharacter;
			float Distance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToLocation_Parms, PlayerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetClosestPlayerToLocation_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetClosestPlayerToLocation", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetClosestPlayerToLocation_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics
	{
		struct SBZPlayerLibrary_eventGetLocalPlayerController_Parms
		{
			const UObject* WorldContextObject;
			APlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetLocalPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetLocalPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetLocalPlayerController", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetLocalPlayerController_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics
	{
		struct SBZPlayerLibrary_eventGetLocalPlayerPawn_Parms
		{
			const UObject* WorldContextObject;
			APawn* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetLocalPlayerPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetLocalPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetLocalPlayerPawn", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetLocalPlayerPawn_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics
	{
		struct SBZPlayerLibrary_eventGetLocalPlayerState_Parms
		{
			const UObject* WorldContextObject;
			ASBZPlayerState* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetLocalPlayerState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetLocalPlayerState_Parms, ReturnValue), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetLocalPlayerState", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetLocalPlayerState_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics
	{
		struct SBZPlayerLibrary_eventGetNumAlivePlayers_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetNumAlivePlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetNumAlivePlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetNumAlivePlayers", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetNumAlivePlayers_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics
	{
		struct SBZPlayerLibrary_eventGetNumConnectedPlayers_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetNumConnectedPlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetNumConnectedPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetNumConnectedPlayers", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetNumConnectedPlayers_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics
	{
		struct SBZPlayerLibrary_eventGetRandomPlayerCharacter_Parms
		{
			const UObject* WorldContextObject;
			ASBZPlayerCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetRandomPlayerCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetRandomPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetRandomPlayerCharacter", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetRandomPlayerCharacter_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics
	{
		struct SBZPlayerLibrary_eventGetRandomPlayerCharacterFromStream_Parms
		{
			const UObject* WorldContextObject;
			FRandomStream Stream;
			ASBZPlayerCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetRandomPlayerCharacterFromStream_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetRandomPlayerCharacterFromStream_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_Stream_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventGetRandomPlayerCharacterFromStream_Parms, ReturnValue), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_Stream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "GetRandomPlayerCharacterFromStream", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventGetRandomPlayerCharacterFromStream_Parms), Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics
	{
		struct SBZPlayerLibrary_eventIsPlayerInRange_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			float Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventIsPlayerInRange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventIsPlayerInRange_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerLibrary_eventIsPlayerInRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerLibrary_eventIsPlayerInRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerLibrary_eventIsPlayerInRange_Parms), &Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerLibrary, nullptr, "IsPlayerInRange", nullptr, nullptr, sizeof(SBZPlayerLibrary_eventIsPlayerInRange_Parms), Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerLibrary_NoRegister()
	{
		return USBZPlayerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerLibrary_ApplyCameraFeedbackToLocalPlayer, "ApplyCameraFeedbackToLocalPlayer" }, // 971345509
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetAllSBZPlayerCharacters, "GetAllSBZPlayerCharacters" }, // 2647940967
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToActor, "GetClosestPlayerToActor" }, // 2038331384
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetClosestPlayerToLocation, "GetClosestPlayerToLocation" }, // 2905524703
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerController, "GetLocalPlayerController" }, // 3840621708
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerPawn, "GetLocalPlayerPawn" }, // 3712441887
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetLocalPlayerState, "GetLocalPlayerState" }, // 181800410
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetNumAlivePlayers, "GetNumAlivePlayers" }, // 3043257458
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetNumConnectedPlayers, "GetNumConnectedPlayers" }, // 3834560554
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacter, "GetRandomPlayerCharacter" }, // 1770197882
		{ &Z_Construct_UFunction_USBZPlayerLibrary_GetRandomPlayerCharacterFromStream, "GetRandomPlayerCharacterFromStream" }, // 2894761150
		{ &Z_Construct_UFunction_USBZPlayerLibrary_IsPlayerInRange, "IsPlayerInRange" }, // 1554248174
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerLibrary_Statics::ClassParams = {
		&USBZPlayerLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerLibrary, 1042637196);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerLibrary>()
	{
		return USBZPlayerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerLibrary(Z_Construct_UClass_USBZPlayerLibrary, &USBZPlayerLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
