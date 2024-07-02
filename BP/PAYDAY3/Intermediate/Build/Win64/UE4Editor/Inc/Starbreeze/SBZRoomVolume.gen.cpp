// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomLabel();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointContainerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZRoomVolume::execGetRoomName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetRoomName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZRoomVolume::execGetRoomType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZRoomType*)Z_Param__Result=P_THIS->GetRoomType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZRoomVolume::execSetRoomName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InRoomName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomName(Z_Param_Out_InRoomName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZRoomVolume::execSetRoomType)
	{
		P_GET_ENUM(ESBZRoomType,Z_Param_InRoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomType(ESBZRoomType(Z_Param_InRoomType));
		P_NATIVE_END;
	}
	void ASBZRoomVolume::StaticRegisterNativesASBZRoomVolume()
	{
		UClass* Class = ASBZRoomVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoomName", &ASBZRoomVolume::execGetRoomName },
			{ "GetRoomType", &ASBZRoomVolume::execGetRoomType },
			{ "SetRoomName", &ASBZRoomVolume::execSetRoomName },
			{ "SetRoomType", &ASBZRoomVolume::execSetRoomType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics
	{
		struct SBZRoomVolume_eventGetRoomName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolume_eventGetRoomName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZRoomVolume, nullptr, "GetRoomName", nullptr, nullptr, sizeof(SBZRoomVolume_eventGetRoomName_Parms), Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZRoomVolume_GetRoomName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZRoomVolume_GetRoomName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics
	{
		struct SBZRoomVolume_eventGetRoomType_Parms
		{
			ESBZRoomType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolume_eventGetRoomType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZRoomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZRoomVolume, nullptr, "GetRoomType", nullptr, nullptr, sizeof(SBZRoomVolume_eventGetRoomType_Parms), Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZRoomVolume_GetRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZRoomVolume_GetRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics
	{
		struct SBZRoomVolume_eventSetRoomName_Parms
		{
			FText InRoomName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRoomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InRoomName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::NewProp_InRoomName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::NewProp_InRoomName = { "InRoomName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolume_eventSetRoomName_Parms, InRoomName), METADATA_PARAMS(Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::NewProp_InRoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::NewProp_InRoomName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::NewProp_InRoomName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZRoomVolume, nullptr, "SetRoomName", nullptr, nullptr, sizeof(SBZRoomVolume_eventSetRoomName_Parms), Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZRoomVolume_SetRoomName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZRoomVolume_SetRoomName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics
	{
		struct SBZRoomVolume_eventSetRoomType_Parms
		{
			ESBZRoomType InRoomType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRoomType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRoomType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::NewProp_InRoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::NewProp_InRoomType = { "InRoomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolume_eventSetRoomType_Parms, InRoomType), Z_Construct_UEnum_Starbreeze_ESBZRoomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::NewProp_InRoomType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::NewProp_InRoomType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZRoomVolume, nullptr, "SetRoomType", nullptr, nullptr, sizeof(SBZRoomVolume_eventSetRoomType_Parms), Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZRoomVolume_SetRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZRoomVolume_SetRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister()
	{
		return ASBZRoomVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZRoomVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoomType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RoomName;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_RoomConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomConnections;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Label_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CoverPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchableCovers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchableCovers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchableCovers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsInRoom_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsInRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsInRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIObjectivesInRoom_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIObjectivesInRoom_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIObjectivesInRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIObjectivesInRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZRoomVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZRoomVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZRoomVolume_GetRoomName, "GetRoomName" }, // 1515386873
		{ &Z_Construct_UFunction_ASBZRoomVolume_GetRoomType, "GetRoomType" }, // 1948649199
		{ &Z_Construct_UFunction_ASBZRoomVolume_SetRoomName, "SetRoomName" }, // 2467825233
		{ &Z_Construct_UFunction_ASBZRoomVolume_SetRoomType, "SetRoomType" }, // 1659698039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZRoomVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, RoomType), Z_Construct_UEnum_Starbreeze_ESBZRoomType, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, RoomName), METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomName_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections_Inner = { "RoomConnections", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections = { "RoomConnections", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, RoomConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, Label), Z_Construct_UEnum_Starbreeze_ESBZRoomLabel, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints_Inner = { "CoverPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints = { "CoverPoints", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, CoverPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers_Inner = { "SearchableCovers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers = { "SearchableCovers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, SearchableCovers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom_Inner = { "ActorsInRoom", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom = { "ActorsInRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, ActorsInRoom), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_Inner = { "AIObjectivesInRoom", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom = { "AIObjectivesInRoom", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomVolume, AIObjectivesInRoom), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZRoomVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_RoomConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_CoverPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_SearchableCovers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_ActorsInRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomVolume_Statics::NewProp_AIObjectivesInRoom,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZRoomVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZRoomVolume, INavRelevantInterface), false },
			{ Z_Construct_UClass_USBZCoverPointContainerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZRoomVolume, ISBZCoverPointContainerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZRoomVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZRoomVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZRoomVolume_Statics::ClassParams = {
		&ASBZRoomVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZRoomVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZRoomVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZRoomVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZRoomVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZRoomVolume, 3933851007);
	template<> STARBREEZE_API UClass* StaticClass<ASBZRoomVolume>()
	{
		return ASBZRoomVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZRoomVolume(Z_Construct_UClass_ASBZRoomVolume, &ASBZRoomVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZRoomVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZRoomVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
