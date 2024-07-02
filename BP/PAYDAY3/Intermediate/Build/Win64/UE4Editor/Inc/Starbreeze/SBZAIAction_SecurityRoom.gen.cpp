// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_SecurityRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_SecurityRoom() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SecurityRoom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SecurityRoom();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityRoom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAction_SecurityRoom::execClearDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAction_SecurityRoom::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAction_SecurityRoom::execOnSecurityRoomVolumeBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecurityRoomVolumeBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void USBZAIAction_SecurityRoom::StaticRegisterNativesUSBZAIAction_SecurityRoom()
	{
		UClass* Class = USBZAIAction_SecurityRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearDelegates", &USBZAIAction_SecurityRoom::execClearDelegates },
			{ "OnHeistStateChanged", &USBZAIAction_SecurityRoom::execOnHeistStateChanged },
			{ "OnSecurityRoomVolumeBeginOverlap", &USBZAIAction_SecurityRoom::execOnSecurityRoomVolumeBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_SecurityRoom, nullptr, "ClearDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics
	{
		struct SBZAIAction_SecurityRoom_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_SecurityRoom_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_SecurityRoom_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_SecurityRoom, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZAIAction_SecurityRoom_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics
	{
		struct SBZAIAction_SecurityRoom_eventOnSecurityRoomVolumeBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_SecurityRoom_eventOnSecurityRoomVolumeBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_SecurityRoom_eventOnSecurityRoomVolumeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_SecurityRoom, nullptr, "OnSecurityRoomVolumeBeginOverlap", nullptr, nullptr, sizeof(SBZAIAction_SecurityRoom_eventOnSecurityRoomVolumeBeginOverlap_Parms), Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAction_SecurityRoom_NoRegister()
	{
		return USBZAIAction_SecurityRoom::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecurityRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityRoomVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecurityRoomVolume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction_Order,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAction_SecurityRoom_ClearDelegates, "ClearDelegates" }, // 766742773
		{ &Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnHeistStateChanged, "OnHeistStateChanged" }, // 2842688849
		{ &Z_Construct_UFunction_USBZAIAction_SecurityRoom_OnSecurityRoomVolumeBeginOverlap, "OnSecurityRoomVolumeBeginOverlap" }, // 1978550196
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_SecurityRoom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoom = { "SecurityRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SecurityRoom, SecurityRoom), Z_Construct_UClass_ASBZSecurityRoom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_OwnerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SecurityRoom, OwnerController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_OwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_OwnerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoomVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoomVolume = { "SecurityRoomVolume", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SecurityRoom, SecurityRoomVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoomVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoomVolume_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates_Inner = { "Gates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates = { "Gates", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SecurityRoom, Gates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_OwnerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_SecurityRoomVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::NewProp_Gates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_SecurityRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::ClassParams = {
		&USBZAIAction_SecurityRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_SecurityRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_SecurityRoom, 1359312193);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_SecurityRoom>()
	{
		return USBZAIAction_SecurityRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_SecurityRoom(Z_Construct_UClass_USBZAIAction_SecurityRoom, &USBZAIAction_SecurityRoom::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_SecurityRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_SecurityRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
