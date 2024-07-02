// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamepadUMGPlugin/Public/VirtualCursorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCursorFunctionLibrary() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execDisableVirtualCursor)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execEnableVirtualCursor)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execIsCursorOverInteractableWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execIsMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsMoving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execIsUsingAnalogCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsUsingAnalogCursor();
		P_NATIVE_END;
	}
	void UVirtualCursorFunctionLibrary::StaticRegisterNativesUVirtualCursorFunctionLibrary()
	{
		UClass* Class = UVirtualCursorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableVirtualCursor", &UVirtualCursorFunctionLibrary::execDisableVirtualCursor },
			{ "EnableVirtualCursor", &UVirtualCursorFunctionLibrary::execEnableVirtualCursor },
			{ "IsCursorOverInteractableWidget", &UVirtualCursorFunctionLibrary::execIsCursorOverInteractableWidget },
			{ "IsEnabled", &UVirtualCursorFunctionLibrary::execIsEnabled },
			{ "IsMoving", &UVirtualCursorFunctionLibrary::execIsMoving },
			{ "IsUsingAnalogCursor", &UVirtualCursorFunctionLibrary::execIsUsingAnalogCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "DisableVirtualCursor", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "EnableVirtualCursor", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics
	{
		struct VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "IsCursorOverInteractableWidget", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics
	{
		struct VirtualCursorFunctionLibrary_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualCursorFunctionLibrary_eventIsEnabled_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "IsEnabled", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventIsEnabled_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics
	{
		struct VirtualCursorFunctionLibrary_eventIsMoving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualCursorFunctionLibrary_eventIsMoving_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "IsMoving", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventIsMoving_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "IsUsingAnalogCursor", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor, "DisableVirtualCursor" }, // 4169679446
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor, "EnableVirtualCursor" }, // 2397760740
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget, "IsCursorOverInteractableWidget" }, // 4168434198
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled, "IsEnabled" }, // 3421217935
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving, "IsMoving" }, // 2573833063
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor, "IsUsingAnalogCursor" }, // 2601007096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VirtualCursorFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCursorFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::ClassParams = {
		&UVirtualCursorFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualCursorFunctionLibrary, 2357757628);
	template<> GAMEPADUMGPLUGIN_API UClass* StaticClass<UVirtualCursorFunctionLibrary>()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualCursorFunctionLibrary(Z_Construct_UClass_UVirtualCursorFunctionLibrary, &UVirtualCursorFunctionLibrary::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UVirtualCursorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCursorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
