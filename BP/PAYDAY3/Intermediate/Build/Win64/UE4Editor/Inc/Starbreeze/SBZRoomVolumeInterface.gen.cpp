// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomVolumeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomVolumeInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZRoomVolumeInterface::execEnterRoom)
	{
		P_GET_OBJECT(ASBZRoomVolume,Z_Param_RoomVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterRoom_Implementation(Z_Param_RoomVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZRoomVolumeInterface::execGetCurrentRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZRoomVolume**)Z_Param__Result=P_THIS->GetCurrentRoom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZRoomVolumeInterface::execLeaveRoom)
	{
		P_GET_OBJECT(ASBZRoomVolume,Z_Param_RoomVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveRoom_Implementation(Z_Param_RoomVolume);
		P_NATIVE_END;
	}
	void ISBZRoomVolumeInterface::EnterRoom(ASBZRoomVolume* RoomVolume)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnterRoom instead.");
	}
	ASBZRoomVolume* ISBZRoomVolumeInterface::GetCurrentRoom() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentRoom instead.");
		SBZRoomVolumeInterface_eventGetCurrentRoom_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISBZRoomVolumeInterface::LeaveRoom(ASBZRoomVolume* RoomVolume)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeaveRoom instead.");
	}
	void USBZRoomVolumeInterface::StaticRegisterNativesUSBZRoomVolumeInterface()
	{
		UClass* Class = USBZRoomVolumeInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterRoom", &ISBZRoomVolumeInterface::execEnterRoom },
			{ "GetCurrentRoom", &ISBZRoomVolumeInterface::execGetCurrentRoom },
			{ "LeaveRoom", &ISBZRoomVolumeInterface::execLeaveRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::NewProp_RoomVolume = { "RoomVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolumeInterface_eventEnterRoom_Parms, RoomVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::NewProp_RoomVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolumeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomVolumeInterface, nullptr, "EnterRoom", nullptr, nullptr, sizeof(SBZRoomVolumeInterface_eventEnterRoom_Parms), Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolumeInterface_eventGetCurrentRoom_Parms, ReturnValue), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolumeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomVolumeInterface, nullptr, "GetCurrentRoom", nullptr, nullptr, sizeof(SBZRoomVolumeInterface_eventGetCurrentRoom_Parms), Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::NewProp_RoomVolume = { "RoomVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomVolumeInterface_eventLeaveRoom_Parms, RoomVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::NewProp_RoomVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomVolumeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomVolumeInterface, nullptr, "LeaveRoom", nullptr, nullptr, sizeof(SBZRoomVolumeInterface_eventLeaveRoom_Parms), Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister()
	{
		return USBZRoomVolumeInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZRoomVolumeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRoomVolumeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRoomVolumeInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRoomVolumeInterface_EnterRoom, "EnterRoom" }, // 3345321328
		{ &Z_Construct_UFunction_USBZRoomVolumeInterface_GetCurrentRoom, "GetCurrentRoom" }, // 3040379148
		{ &Z_Construct_UFunction_USBZRoomVolumeInterface_LeaveRoom, "LeaveRoom" }, // 1842793792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomVolumeInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomVolumeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRoomVolumeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZRoomVolumeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRoomVolumeInterface_Statics::ClassParams = {
		&USBZRoomVolumeInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRoomVolumeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomVolumeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRoomVolumeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRoomVolumeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRoomVolumeInterface, 1458729579);
	template<> STARBREEZE_API UClass* StaticClass<USBZRoomVolumeInterface>()
	{
		return USBZRoomVolumeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRoomVolumeInterface(Z_Construct_UClass_USBZRoomVolumeInterface, &USBZRoomVolumeInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRoomVolumeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRoomVolumeInterface);
	static FName NAME_USBZRoomVolumeInterface_EnterRoom = FName(TEXT("EnterRoom"));
	void ISBZRoomVolumeInterface::Execute_EnterRoom(UObject* O, ASBZRoomVolume* RoomVolume)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZRoomVolumeInterface::StaticClass()));
		SBZRoomVolumeInterface_eventEnterRoom_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZRoomVolumeInterface_EnterRoom);
		if (Func)
		{
			Parms.RoomVolume=RoomVolume;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZRoomVolumeInterface*)(O->GetNativeInterfaceAddress(USBZRoomVolumeInterface::StaticClass())))
		{
			I->EnterRoom_Implementation(RoomVolume);
		}
	}
	static FName NAME_USBZRoomVolumeInterface_GetCurrentRoom = FName(TEXT("GetCurrentRoom"));
	ASBZRoomVolume* ISBZRoomVolumeInterface::Execute_GetCurrentRoom(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZRoomVolumeInterface::StaticClass()));
		SBZRoomVolumeInterface_eventGetCurrentRoom_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZRoomVolumeInterface_GetCurrentRoom);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZRoomVolumeInterface*)(O->GetNativeInterfaceAddress(USBZRoomVolumeInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurrentRoom_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZRoomVolumeInterface_LeaveRoom = FName(TEXT("LeaveRoom"));
	void ISBZRoomVolumeInterface::Execute_LeaveRoom(UObject* O, ASBZRoomVolume* RoomVolume)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZRoomVolumeInterface::StaticClass()));
		SBZRoomVolumeInterface_eventLeaveRoom_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZRoomVolumeInterface_LeaveRoom);
		if (Func)
		{
			Parms.RoomVolume=RoomVolume;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZRoomVolumeInterface*)(O->GetNativeInterfaceAddress(USBZRoomVolumeInterface::StaticClass())))
		{
			I->LeaveRoom_Implementation(RoomVolume);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
