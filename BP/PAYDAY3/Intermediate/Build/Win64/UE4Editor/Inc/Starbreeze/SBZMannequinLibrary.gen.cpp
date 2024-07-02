// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMannequinLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMannequinLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMannequinLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMannequinLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMannequinLibrary::execGetMainMenuMannequin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZMainMenuPlayerCharacter**)Z_Param__Result=USBZMannequinLibrary::GetMainMenuMannequin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMannequinLibrary::execGetMultiplayerMannequin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZMainMenuPlayerCharacter**)Z_Param__Result=USBZMannequinLibrary::GetMultiplayerMannequin(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMannequinLibrary::execRefreshMainMenuMannequin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZInventoryEquipmentType,Z_Param_EquipmentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZMannequinLibrary::RefreshMainMenuMannequin(Z_Param_WorldContextObject,ESBZInventoryEquipmentType(Z_Param_EquipmentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMannequinLibrary::execSetMainMenuMannequinEquipment)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZInventoryEquipmentType,Z_Param_EquipmentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZMannequinLibrary::SetMainMenuMannequinEquipment(Z_Param_WorldContextObject,ESBZInventoryEquipmentType(Z_Param_EquipmentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMannequinLibrary::execSetMainMenuMannequinLoadout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZEquippableConfig,Z_Param_Out_EquippableConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZMannequinLibrary::SetMainMenuMannequinLoadout(Z_Param_WorldContextObject,Z_Param_Out_EquippableConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMannequinLibrary::execSetMainMenuMannequinPose)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZMannequinLibrary::SetMainMenuMannequinPose(Z_Param_WorldContextObject,Z_Param_Pose);
		P_NATIVE_END;
	}
	void USBZMannequinLibrary::StaticRegisterNativesUSBZMannequinLibrary()
	{
		UClass* Class = USBZMannequinLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainMenuMannequin", &USBZMannequinLibrary::execGetMainMenuMannequin },
			{ "GetMultiplayerMannequin", &USBZMannequinLibrary::execGetMultiplayerMannequin },
			{ "RefreshMainMenuMannequin", &USBZMannequinLibrary::execRefreshMainMenuMannequin },
			{ "SetMainMenuMannequinEquipment", &USBZMannequinLibrary::execSetMainMenuMannequinEquipment },
			{ "SetMainMenuMannequinLoadout", &USBZMannequinLibrary::execSetMainMenuMannequinLoadout },
			{ "SetMainMenuMannequinPose", &USBZMannequinLibrary::execSetMainMenuMannequinPose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics
	{
		struct SBZMannequinLibrary_eventGetMainMenuMannequin_Parms
		{
			const UObject* WorldContextObject;
			ASBZMainMenuPlayerCharacter* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventGetMainMenuMannequin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventGetMainMenuMannequin_Parms, ReturnValue), Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMannequinLibrary, nullptr, "GetMainMenuMannequin", nullptr, nullptr, sizeof(SBZMannequinLibrary_eventGetMainMenuMannequin_Parms), Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics
	{
		struct SBZMannequinLibrary_eventGetMultiplayerMannequin_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			ASBZMainMenuPlayerCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventGetMultiplayerMannequin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventGetMultiplayerMannequin_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventGetMultiplayerMannequin_Parms, ReturnValue), Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMannequinLibrary, nullptr, "GetMultiplayerMannequin", nullptr, nullptr, sizeof(SBZMannequinLibrary_eventGetMultiplayerMannequin_Parms), Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics
	{
		struct SBZMannequinLibrary_eventRefreshMainMenuMannequin_Parms
		{
			const UObject* WorldContextObject;
			ESBZInventoryEquipmentType EquipmentType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipmentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventRefreshMainMenuMannequin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventRefreshMainMenuMannequin_Parms, EquipmentType), Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::NewProp_EquipmentType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMannequinLibrary, nullptr, "RefreshMainMenuMannequin", nullptr, nullptr, sizeof(SBZMannequinLibrary_eventRefreshMainMenuMannequin_Parms), Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics
	{
		struct SBZMannequinLibrary_eventSetMainMenuMannequinEquipment_Parms
		{
			const UObject* WorldContextObject;
			ESBZInventoryEquipmentType EquipmentType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipmentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventSetMainMenuMannequinEquipment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventSetMainMenuMannequinEquipment_Parms, EquipmentType), Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::NewProp_EquipmentType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMannequinLibrary, nullptr, "SetMainMenuMannequinEquipment", nullptr, nullptr, sizeof(SBZMannequinLibrary_eventSetMainMenuMannequinEquipment_Parms), Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics
	{
		struct SBZMannequinLibrary_eventSetMainMenuMannequinLoadout_Parms
		{
			const UObject* WorldContextObject;
			FSBZEquippableConfig EquippableConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventSetMainMenuMannequinLoadout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventSetMainMenuMannequinLoadout_Parms, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_EquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::NewProp_EquippableConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMannequinLibrary, nullptr, "SetMainMenuMannequinLoadout", nullptr, nullptr, sizeof(SBZMannequinLibrary_eventSetMainMenuMannequinLoadout_Parms), Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics
	{
		struct SBZMannequinLibrary_eventSetMainMenuMannequinPose_Parms
		{
			const UObject* WorldContextObject;
			UAnimSequenceBase* Pose;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventSetMainMenuMannequinPose_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMannequinLibrary_eventSetMainMenuMannequinPose_Parms, Pose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::NewProp_Pose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMannequinLibrary, nullptr, "SetMainMenuMannequinPose", nullptr, nullptr, sizeof(SBZMannequinLibrary_eventSetMainMenuMannequinPose_Parms), Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMannequinLibrary_NoRegister()
	{
		return USBZMannequinLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZMannequinLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMannequinLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMannequinLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMannequinLibrary_GetMainMenuMannequin, "GetMainMenuMannequin" }, // 4153541810
		{ &Z_Construct_UFunction_USBZMannequinLibrary_GetMultiplayerMannequin, "GetMultiplayerMannequin" }, // 536424351
		{ &Z_Construct_UFunction_USBZMannequinLibrary_RefreshMainMenuMannequin, "RefreshMainMenuMannequin" }, // 3784814838
		{ &Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinEquipment, "SetMainMenuMannequinEquipment" }, // 4010958850
		{ &Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinLoadout, "SetMainMenuMannequinLoadout" }, // 872730280
		{ &Z_Construct_UFunction_USBZMannequinLibrary_SetMainMenuMannequinPose, "SetMainMenuMannequinPose" }, // 3652326623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMannequinLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMannequinLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMannequinLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMannequinLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMannequinLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMannequinLibrary_Statics::ClassParams = {
		&USBZMannequinLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMannequinLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMannequinLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMannequinLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMannequinLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMannequinLibrary, 1138147630);
	template<> STARBREEZE_API UClass* StaticClass<USBZMannequinLibrary>()
	{
		return USBZMannequinLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMannequinLibrary(Z_Construct_UClass_USBZMannequinLibrary, &USBZMannequinLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMannequinLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMannequinLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
