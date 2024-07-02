// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZStateMachineBase/Public/SBZStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachine() {}
// Cross Module References
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachine_NoRegister();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SBZStateMachineBase();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineState_NoRegister();
// End Cross Module References
	void USBZStateMachine::StaticRegisterNativesUSBZStateMachine()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachine_NoRegister()
	{
		return USBZStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_States_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_States_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZStateMachineBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachine_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachine" },
		{ "ModuleRelativePath", "Public/SBZStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachine_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachine, CurrentState), Z_Construct_UClass_USBZStateMachineState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachine_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachine_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_ValueProp = { "States", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZStateMachineState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_Key_KeyProp = { "States_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachine" },
		{ "ModuleRelativePath", "Public/SBZStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachine, States), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachine_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachine_Statics::NewProp_States,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachine_Statics::ClassParams = {
		&USBZStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachine, 36597468);
	template<> SBZSTATEMACHINEBASE_API UClass* StaticClass<USBZStateMachine>()
	{
		return USBZStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachine(Z_Construct_UClass_USBZStateMachine, &USBZStateMachine::StaticClass, TEXT("/Script/SBZStateMachineBase"), TEXT("USBZStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
