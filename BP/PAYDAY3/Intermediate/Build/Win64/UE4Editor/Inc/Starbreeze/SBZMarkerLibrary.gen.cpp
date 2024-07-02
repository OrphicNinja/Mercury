// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMarkerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMarkerLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMarkerLibrary::execAddLocalMarker)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZMarkerDataAsset,Z_Param_MarkerDataAsset);
		P_GET_STRUCT(FVector,Z_Param_Translation);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMarkerLibrary::AddLocalMarker(Z_Param_WorldContextObject,Z_Param_MarkerDataAsset,Z_Param_Translation,Z_Param_Component,Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMarkerLibrary::execAddReplicatedMarker)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZMarkerDataAsset,Z_Param_MarkerDataAsset);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMarkerLibrary::AddReplicatedMarker(Z_Param_WorldContextObject,Z_Param_MarkerDataAsset,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMarkerLibrary::execRemoveLocalMarker)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZMarkerLibrary::RemoveLocalMarker(Z_Param_WorldContextObject,Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMarkerLibrary::execRemoveReplicatedMarker)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZMarkerLibrary::RemoveReplicatedMarker(Z_Param_WorldContextObject,Z_Param_ID);
		P_NATIVE_END;
	}
	void USBZMarkerLibrary::StaticRegisterNativesUSBZMarkerLibrary()
	{
		UClass* Class = USBZMarkerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocalMarker", &USBZMarkerLibrary::execAddLocalMarker },
			{ "AddReplicatedMarker", &USBZMarkerLibrary::execAddReplicatedMarker },
			{ "RemoveLocalMarker", &USBZMarkerLibrary::execRemoveLocalMarker },
			{ "RemoveReplicatedMarker", &USBZMarkerLibrary::execRemoveReplicatedMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics
	{
		struct SBZMarkerLibrary_eventAddLocalMarker_Parms
		{
			UObject* WorldContextObject;
			const USBZMarkerDataAsset* MarkerDataAsset;
			FVector Translation;
			USceneComponent* Component;
			FName SocketName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddLocalMarker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_MarkerDataAsset = { "MarkerDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddLocalMarker_Parms, MarkerDataAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddLocalMarker_Parms, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddLocalMarker_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddLocalMarker_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddLocalMarker_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_MarkerDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerLibrary, nullptr, "AddLocalMarker", nullptr, nullptr, sizeof(SBZMarkerLibrary_eventAddLocalMarker_Parms), Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics
	{
		struct SBZMarkerLibrary_eventAddReplicatedMarker_Parms
		{
			UObject* WorldContextObject;
			const USBZMarkerDataAsset* MarkerDataAsset;
			FVector Location;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddReplicatedMarker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_MarkerDataAsset = { "MarkerDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddReplicatedMarker_Parms, MarkerDataAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddReplicatedMarker_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventAddReplicatedMarker_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_MarkerDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerLibrary, nullptr, "AddReplicatedMarker", nullptr, nullptr, sizeof(SBZMarkerLibrary_eventAddReplicatedMarker_Parms), Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics
	{
		struct SBZMarkerLibrary_eventRemoveLocalMarker_Parms
		{
			UObject* WorldContextObject;
			int32 ID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventRemoveLocalMarker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventRemoveLocalMarker_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerLibrary, nullptr, "RemoveLocalMarker", nullptr, nullptr, sizeof(SBZMarkerLibrary_eventRemoveLocalMarker_Parms), Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics
	{
		struct SBZMarkerLibrary_eventRemoveReplicatedMarker_Parms
		{
			UObject* WorldContextObject;
			int32 ID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventRemoveReplicatedMarker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerLibrary_eventRemoveReplicatedMarker_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerLibrary, nullptr, "RemoveReplicatedMarker", nullptr, nullptr, sizeof(SBZMarkerLibrary_eventRemoveReplicatedMarker_Parms), Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMarkerLibrary_NoRegister()
	{
		return USBZMarkerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZMarkerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMarkerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMarkerLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMarkerLibrary_AddLocalMarker, "AddLocalMarker" }, // 1764896943
		{ &Z_Construct_UFunction_USBZMarkerLibrary_AddReplicatedMarker, "AddReplicatedMarker" }, // 3360800022
		{ &Z_Construct_UFunction_USBZMarkerLibrary_RemoveLocalMarker, "RemoveLocalMarker" }, // 317183099
		{ &Z_Construct_UFunction_USBZMarkerLibrary_RemoveReplicatedMarker, "RemoveReplicatedMarker" }, // 2889578825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMarkerLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMarkerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMarkerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMarkerLibrary_Statics::ClassParams = {
		&USBZMarkerLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMarkerLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMarkerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMarkerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMarkerLibrary, 3231290762);
	template<> STARBREEZE_API UClass* StaticClass<USBZMarkerLibrary>()
	{
		return USBZMarkerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMarkerLibrary(Z_Construct_UClass_USBZMarkerLibrary, &USBZMarkerLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMarkerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMarkerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
