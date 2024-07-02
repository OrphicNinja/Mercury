// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableWeaponBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableWeaponBox() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeaponBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeaponBox();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeapon();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlaceableWeaponBox::execOnInteractionEnabledStateChange)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bInNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionEnabledStateChange(Z_Param_InteractableComponent,Z_Param_bInNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableWeaponBox::execSetActiveState)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveState(Z_Param_bActive);
		P_NATIVE_END;
	}
	void ASBZPlaceableWeaponBox::StaticRegisterNativesASBZPlaceableWeaponBox()
	{
		UClass* Class = ASBZPlaceableWeaponBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractionEnabledStateChange", &ASBZPlaceableWeaponBox::execOnInteractionEnabledStateChange },
			{ "SetActiveState", &ASBZPlaceableWeaponBox::execSetActiveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics
	{
		struct SBZPlaceableWeaponBox_eventOnInteractionEnabledStateChange_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bInNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableWeaponBox_eventOnInteractionEnabledStateChange_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZPlaceableWeaponBox_eventOnInteractionEnabledStateChange_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlaceableWeaponBox_eventOnInteractionEnabledStateChange_Parms), &Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableWeaponBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableWeaponBox, nullptr, "OnInteractionEnabledStateChange", nullptr, nullptr, sizeof(SBZPlaceableWeaponBox_eventOnInteractionEnabledStateChange_Parms), Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics
	{
		struct SBZPlaceableWeaponBox_eventSetActiveState_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SBZPlaceableWeaponBox_eventSetActiveState_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlaceableWeaponBox_eventSetActiveState_Parms), &Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableWeaponBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableWeaponBox, nullptr, "SetActiveState", nullptr, nullptr, sizeof(SBZPlaceableWeaponBox_eventSetActiveState_Parms), Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlaceableWeaponBox_NoRegister()
	{
		return ASBZPlaceableWeaponBox::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlaceableWeaponBox_OnInteractionEnabledStateChange, "OnInteractionEnabledStateChange" }, // 189818380
		{ &Z_Construct_UFunction_ASBZPlaceableWeaponBox_SetActiveState, "SetActiveState" }, // 661615911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableWeaponBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableWeaponBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableWeaponBox" },
		{ "ModuleRelativePath", "Public/SBZPlaceableWeaponBox.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ASBZPlaceableWeaponBox*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlaceableWeaponBox), &Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlaceableWeaponBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::ClassParams = {
		&ASBZPlaceableWeaponBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlaceableWeaponBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlaceableWeaponBox, 3885857622);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlaceableWeaponBox>()
	{
		return ASBZPlaceableWeaponBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlaceableWeaponBox(Z_Construct_UClass_ASBZPlaceableWeaponBox, &ASBZPlaceableWeaponBox::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlaceableWeaponBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlaceableWeaponBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
