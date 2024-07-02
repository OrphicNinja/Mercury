// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlatformUserManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlatformUserManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlatformUserManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlatformUserManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlatformUserManager::execHandleUIStackChanged)
	{
		P_GET_STRUCT(FSBZUIStackChangedEvent,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleUIStackChanged(Z_Param_Event);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlatformUserManager::execOnPopUpClosedConfirmChanges)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosedConfirmChanges(Z_Param_ActionName);
		P_NATIVE_END;
	}
	void USBZPlatformUserManager::StaticRegisterNativesUSBZPlatformUserManager()
	{
		UClass* Class = USBZPlatformUserManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleUIStackChanged", &USBZPlatformUserManager::execHandleUIStackChanged },
			{ "OnPopUpClosedConfirmChanges", &USBZPlatformUserManager::execOnPopUpClosedConfirmChanges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics
	{
		struct SBZPlatformUserManager_eventHandleUIStackChanged_Parms
		{
			FSBZUIStackChangedEvent Event;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlatformUserManager_eventHandleUIStackChanged_Parms, Event), Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlatformUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlatformUserManager, nullptr, "HandleUIStackChanged", nullptr, nullptr, sizeof(SBZPlatformUserManager_eventHandleUIStackChanged_Parms), Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics
	{
		struct SBZPlatformUserManager_eventOnPopUpClosedConfirmChanges_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlatformUserManager_eventOnPopUpClosedConfirmChanges_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlatformUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlatformUserManager, nullptr, "OnPopUpClosedConfirmChanges", nullptr, nullptr, sizeof(SBZPlatformUserManager_eventOnPopUpClosedConfirmChanges_Parms), Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlatformUserManager_NoRegister()
	{
		return USBZPlatformUserManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlatformUserManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectsHoldingBackReturnToIIS_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsHoldingBackReturnToIIS_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsHoldingBackReturnToIIS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlatformUserManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlatformUserManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlatformUserManager_HandleUIStackChanged, "HandleUIStackChanged" }, // 3259873064
		{ &Z_Construct_UFunction_USBZPlatformUserManager_OnPopUpClosedConfirmChanges, "OnPopUpClosedConfirmChanges" }, // 4170500303
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlatformUserManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlatformUserManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlatformUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS_Inner = { "ObjectsHoldingBackReturnToIIS", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlatformUserManager" },
		{ "ModuleRelativePath", "Public/SBZPlatformUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS = { "ObjectsHoldingBackReturnToIIS", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlatformUserManager, ObjectsHoldingBackReturnToIIS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlatformUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlatformUserManager_Statics::NewProp_ObjectsHoldingBackReturnToIIS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlatformUserManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlatformUserManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlatformUserManager_Statics::ClassParams = {
		&USBZPlatformUserManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlatformUserManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlatformUserManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlatformUserManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlatformUserManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlatformUserManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlatformUserManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlatformUserManager, 1301683986);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlatformUserManager>()
	{
		return USBZPlatformUserManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlatformUserManager(Z_Construct_UClass_USBZPlatformUserManager, &USBZPlatformUserManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlatformUserManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlatformUserManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
