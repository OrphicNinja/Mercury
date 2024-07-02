// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuTutorialMouseButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuTutorialMouseButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuTutorialMouseButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuTutorialMouseButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuMouseButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuTutorialMouseButton::execIsShowingTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowingTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuTutorialMouseButton::execSetTutorialShowing)
	{
		P_GET_UBOOL(Z_Param_bInIsShowing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTutorialShowing(Z_Param_bInIsShowing);
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuTutorialMouseButton_OnShowingTutorialChanged = FName(TEXT("OnShowingTutorialChanged"));
	void USBZMenuTutorialMouseButton::OnShowingTutorialChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuTutorialMouseButton_OnShowingTutorialChanged),NULL);
	}
	void USBZMenuTutorialMouseButton::StaticRegisterNativesUSBZMenuTutorialMouseButton()
	{
		UClass* Class = USBZMenuTutorialMouseButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsShowingTutorial", &USBZMenuTutorialMouseButton::execIsShowingTutorial },
			{ "SetTutorialShowing", &USBZMenuTutorialMouseButton::execSetTutorialShowing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics
	{
		struct SBZMenuTutorialMouseButton_eventIsShowingTutorial_Parms
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
	void Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMenuTutorialMouseButton_eventIsShowingTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuTutorialMouseButton_eventIsShowingTutorial_Parms), &Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuTutorialMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuTutorialMouseButton, nullptr, "IsShowingTutorial", nullptr, nullptr, sizeof(SBZMenuTutorialMouseButton_eventIsShowingTutorial_Parms), Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuTutorialMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuTutorialMouseButton, nullptr, "OnShowingTutorialChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics
	{
		struct SBZMenuTutorialMouseButton_eventSetTutorialShowing_Parms
		{
			bool bInIsShowing;
		};
		static void NewProp_bInIsShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsShowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::NewProp_bInIsShowing_SetBit(void* Obj)
	{
		((SBZMenuTutorialMouseButton_eventSetTutorialShowing_Parms*)Obj)->bInIsShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::NewProp_bInIsShowing = { "bInIsShowing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuTutorialMouseButton_eventSetTutorialShowing_Parms), &Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::NewProp_bInIsShowing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::NewProp_bInIsShowing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuTutorialMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuTutorialMouseButton, nullptr, "SetTutorialShowing", nullptr, nullptr, sizeof(SBZMenuTutorialMouseButton_eventSetTutorialShowing_Parms), Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuTutorialMouseButton_NoRegister()
	{
		return USBZMenuTutorialMouseButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowing_MetaData[];
#endif
		static void NewProp_bIsShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuMouseButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuTutorialMouseButton_IsShowingTutorial, "IsShowingTutorial" }, // 3414618031
		{ &Z_Construct_UFunction_USBZMenuTutorialMouseButton_OnShowingTutorialChanged, "OnShowingTutorialChanged" }, // 1384167852
		{ &Z_Construct_UFunction_USBZMenuTutorialMouseButton_SetTutorialShowing, "SetTutorialShowing" }, // 4194892726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuTutorialMouseButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuTutorialMouseButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuTutorialMouseButton" },
		{ "ModuleRelativePath", "Public/SBZMenuTutorialMouseButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing_SetBit(void* Obj)
	{
		((USBZMenuTutorialMouseButton*)Obj)->bIsShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing = { "bIsShowing", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuTutorialMouseButton), &Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::NewProp_bIsShowing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuTutorialMouseButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::ClassParams = {
		&USBZMenuTutorialMouseButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuTutorialMouseButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuTutorialMouseButton, 3873023419);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuTutorialMouseButton>()
	{
		return USBZMenuTutorialMouseButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuTutorialMouseButton(Z_Construct_UClass_USBZMenuTutorialMouseButton, &USBZMenuTutorialMouseButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuTutorialMouseButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuTutorialMouseButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
