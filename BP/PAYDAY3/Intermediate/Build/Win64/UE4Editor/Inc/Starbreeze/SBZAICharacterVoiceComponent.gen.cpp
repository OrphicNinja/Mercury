// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacterVoiceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacterVoiceComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterVoiceComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterVoiceComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAICharacterVoiceComponent::execHandleAIBehaviorCategoryChanged)
	{
		P_GET_ENUM(ESBZAIBehaviorCategory,Z_Param_OldCategory);
		P_GET_ENUM(ESBZAIBehaviorCategory,Z_Param_NewCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAIBehaviorCategoryChanged(ESBZAIBehaviorCategory(Z_Param_OldCategory),ESBZAIBehaviorCategory(Z_Param_NewCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAICharacterVoiceComponent::execHandleHumanShieldChanged)
	{
		P_GET_OBJECT(ASBZAICharacter,Z_Param_Victim);
		P_GET_OBJECT(ASBZCharacter,Z_Param_Instigator);
		P_GET_UBOOL(Z_Param_bHumanShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHumanShieldChanged(Z_Param_Victim,Z_Param_Instigator,Z_Param_bHumanShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAICharacterVoiceComponent::execHandleOnHostageStateChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_HostageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHostageStateChanged(Z_Param_HostageState);
		P_NATIVE_END;
	}
	void USBZAICharacterVoiceComponent::StaticRegisterNativesUSBZAICharacterVoiceComponent()
	{
		UClass* Class = USBZAICharacterVoiceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAIBehaviorCategoryChanged", &USBZAICharacterVoiceComponent::execHandleAIBehaviorCategoryChanged },
			{ "HandleHumanShieldChanged", &USBZAICharacterVoiceComponent::execHandleHumanShieldChanged },
			{ "HandleOnHostageStateChanged", &USBZAICharacterVoiceComponent::execHandleOnHostageStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics
	{
		struct SBZAICharacterVoiceComponent_eventHandleAIBehaviorCategoryChanged_Parms
		{
			ESBZAIBehaviorCategory OldCategory;
			ESBZAIBehaviorCategory NewCategory;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_OldCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_OldCategory = { "OldCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacterVoiceComponent_eventHandleAIBehaviorCategoryChanged_Parms, OldCategory), Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_NewCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_NewCategory = { "NewCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacterVoiceComponent_eventHandleAIBehaviorCategoryChanged_Parms, NewCategory), Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_OldCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_OldCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_NewCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::NewProp_NewCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAICharacterVoiceComponent, nullptr, "HandleAIBehaviorCategoryChanged", nullptr, nullptr, sizeof(SBZAICharacterVoiceComponent_eventHandleAIBehaviorCategoryChanged_Parms), Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics
	{
		struct SBZAICharacterVoiceComponent_eventHandleHumanShieldChanged_Parms
		{
			ASBZAICharacter* Victim;
			ASBZCharacter* Instigator;
			bool bHumanShield;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Victim;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_bHumanShield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHumanShield;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacterVoiceComponent_eventHandleHumanShieldChanged_Parms, Victim), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacterVoiceComponent_eventHandleHumanShieldChanged_Parms, Instigator), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_bHumanShield_SetBit(void* Obj)
	{
		((SBZAICharacterVoiceComponent_eventHandleHumanShieldChanged_Parms*)Obj)->bHumanShield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_bHumanShield = { "bHumanShield", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacterVoiceComponent_eventHandleHumanShieldChanged_Parms), &Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_bHumanShield_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_Victim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::NewProp_bHumanShield,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAICharacterVoiceComponent, nullptr, "HandleHumanShieldChanged", nullptr, nullptr, sizeof(SBZAICharacterVoiceComponent_eventHandleHumanShieldChanged_Parms), Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics
	{
		struct SBZAICharacterVoiceComponent_eventHandleOnHostageStateChanged_Parms
		{
			uint8 HostageState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HostageState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::NewProp_HostageState = { "HostageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacterVoiceComponent_eventHandleOnHostageStateChanged_Parms, HostageState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::NewProp_HostageState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAICharacterVoiceComponent, nullptr, "HandleOnHostageStateChanged", nullptr, nullptr, sizeof(SBZAICharacterVoiceComponent_eventHandleOnHostageStateChanged_Parms), Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAICharacterVoiceComponent_NoRegister()
	{
		return USBZAICharacterVoiceComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterVoiceComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleAIBehaviorCategoryChanged, "HandleAIBehaviorCategoryChanged" }, // 1420162319
		{ &Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleHumanShieldChanged, "HandleHumanShieldChanged" }, // 1652942636
		{ &Z_Construct_UFunction_USBZAICharacterVoiceComponent_HandleOnHostageStateChanged, "HandleOnHostageStateChanged" }, // 303538275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAICharacterVoiceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterVoiceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICharacterVoiceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::ClassParams = {
		&USBZAICharacterVoiceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICharacterVoiceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICharacterVoiceComponent, 417555582);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICharacterVoiceComponent>()
	{
		return USBZAICharacterVoiceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICharacterVoiceComponent(Z_Construct_UClass_USBZAICharacterVoiceComponent, &USBZAICharacterVoiceComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICharacterVoiceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICharacterVoiceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
