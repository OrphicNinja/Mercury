// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_SecurityRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_SecurityRoom() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_SecurityRoom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_SecurityRoom();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityRoom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_SecurityRoom::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_SecurityRoom::execOnPausedFunc)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPausedFunc(Z_Param_Out_Reason);
		P_NATIVE_END;
	}
	void USBZAIOrder_SecurityRoom::StaticRegisterNativesUSBZAIOrder_SecurityRoom()
	{
		UClass* Class = USBZAIOrder_SecurityRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChanged", &USBZAIOrder_SecurityRoom::execOnHeistStateChanged },
			{ "OnPausedFunc", &USBZAIOrder_SecurityRoom::execOnPausedFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics
	{
		struct SBZAIOrder_SecurityRoom_eventOnHeistStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_SecurityRoom_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_SecurityRoom_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_SecurityRoom, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZAIOrder_SecurityRoom_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics
	{
		struct SBZAIOrder_SecurityRoom_eventOnPausedFunc_Parms
		{
			FName Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_SecurityRoom_eventOnPausedFunc_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_SecurityRoom, nullptr, "OnPausedFunc", nullptr, nullptr, sizeof(SBZAIOrder_SecurityRoom_eventOnPausedFunc_Parms), Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_SecurityRoom_NoRegister()
	{
		return USBZAIOrder_SecurityRoom::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics
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
	UObject* (*const Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnHeistStateChanged, "OnHeistStateChanged" }, // 4182335015
		{ &Z_Construct_UFunction_USBZAIOrder_SecurityRoom_OnPausedFunc, "OnPausedFunc" }, // 3343263146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_SecurityRoom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoom = { "SecurityRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecurityRoom, SecurityRoom), Z_Construct_UClass_ASBZSecurityRoom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_OwnerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecurityRoom, OwnerController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_OwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_OwnerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoomVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoomVolume = { "SecurityRoomVolume", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecurityRoom, SecurityRoomVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoomVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoomVolume_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates_Inner = { "Gates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates = { "Gates", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecurityRoom, Gates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_OwnerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_SecurityRoomVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::NewProp_Gates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_SecurityRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::ClassParams = {
		&USBZAIOrder_SecurityRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_SecurityRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_SecurityRoom, 708662367);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_SecurityRoom>()
	{
		return USBZAIOrder_SecurityRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_SecurityRoom(Z_Construct_UClass_USBZAIOrder_SecurityRoom, &USBZAIOrder_SecurityRoom::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_SecurityRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_SecurityRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
