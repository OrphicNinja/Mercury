// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeadbobCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeadbobCameraModifier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHeadbobCameraModifier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHeadbobCameraModifier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHeadbobData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetingHeadbobData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHeadbobCameraModifier::execHandleCurrentEquippableIndexChanged)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentEquippableIndex);
		P_GET_UBOOL(Z_Param_bIsOnlyDataChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCurrentEquippableIndexChanged(Z_Param_Character,Z_Param_CurrentEquippableIndex,Z_Param_bIsOnlyDataChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHeadbobCameraModifier::execHandleEquippableArrayChanged)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEquippableArrayChanged(Z_Param_Character);
		P_NATIVE_END;
	}
	void USBZHeadbobCameraModifier::StaticRegisterNativesUSBZHeadbobCameraModifier()
	{
		UClass* Class = USBZHeadbobCameraModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCurrentEquippableIndexChanged", &USBZHeadbobCameraModifier::execHandleCurrentEquippableIndexChanged },
			{ "HandleEquippableArrayChanged", &USBZHeadbobCameraModifier::execHandleEquippableArrayChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics
	{
		struct SBZHeadbobCameraModifier_eventHandleCurrentEquippableIndexChanged_Parms
		{
			ASBZCharacter* Character;
			int32 CurrentEquippableIndex;
			bool bIsOnlyDataChanged;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentEquippableIndex;
		static void NewProp_bIsOnlyDataChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnlyDataChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeadbobCameraModifier_eventHandleCurrentEquippableIndexChanged_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_CurrentEquippableIndex = { "CurrentEquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeadbobCameraModifier_eventHandleCurrentEquippableIndexChanged_Parms, CurrentEquippableIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_bIsOnlyDataChanged_SetBit(void* Obj)
	{
		((SBZHeadbobCameraModifier_eventHandleCurrentEquippableIndexChanged_Parms*)Obj)->bIsOnlyDataChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_bIsOnlyDataChanged = { "bIsOnlyDataChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHeadbobCameraModifier_eventHandleCurrentEquippableIndexChanged_Parms), &Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_bIsOnlyDataChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_CurrentEquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::NewProp_bIsOnlyDataChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeadbobCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHeadbobCameraModifier, nullptr, "HandleCurrentEquippableIndexChanged", nullptr, nullptr, sizeof(SBZHeadbobCameraModifier_eventHandleCurrentEquippableIndexChanged_Parms), Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics
	{
		struct SBZHeadbobCameraModifier_eventHandleEquippableArrayChanged_Parms
		{
			ASBZCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeadbobCameraModifier_eventHandleEquippableArrayChanged_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeadbobCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHeadbobCameraModifier, nullptr, "HandleEquippableArrayChanged", nullptr, nullptr, sizeof(SBZHeadbobCameraModifier_eventHandleEquippableArrayChanged_Parms), Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHeadbobCameraModifier_NoRegister()
	{
		return USBZHeadbobCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USBZHeadbobCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHeadbobData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultHeadbobData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleCurrentEquippableIndexChanged, "HandleCurrentEquippableIndexChanged" }, // 3554074175
		{ &Z_Construct_UFunction_USBZHeadbobCameraModifier_HandleEquippableArrayChanged, "HandleEquippableArrayChanged" }, // 3638026407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHeadbobCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHeadbobCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_DefaultHeadbobData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeadbobCameraModifier" },
		{ "ModuleRelativePath", "Public/SBZHeadbobCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_DefaultHeadbobData = { "DefaultHeadbobData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHeadbobCameraModifier, DefaultHeadbobData), Z_Construct_UClass_USBZHeadbobData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_DefaultHeadbobData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_DefaultHeadbobData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeadbobCameraModifier" },
		{ "ModuleRelativePath", "Public/SBZHeadbobCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentData = { "CurrentData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHeadbobCameraModifier, CurrentData), Z_Construct_UClass_USBZHeadbobData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentTargetingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeadbobCameraModifier" },
		{ "ModuleRelativePath", "Public/SBZHeadbobCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentTargetingData = { "CurrentTargetingData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHeadbobCameraModifier, CurrentTargetingData), Z_Construct_UClass_USBZTargetingHeadbobData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentTargetingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentTargetingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_DefaultHeadbobData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::NewProp_CurrentTargetingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHeadbobCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::ClassParams = {
		&USBZHeadbobCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHeadbobCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHeadbobCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHeadbobCameraModifier, 2269293248);
	template<> STARBREEZE_API UClass* StaticClass<USBZHeadbobCameraModifier>()
	{
		return USBZHeadbobCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHeadbobCameraModifier(Z_Construct_UClass_USBZHeadbobCameraModifier, &USBZHeadbobCameraModifier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHeadbobCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHeadbobCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
