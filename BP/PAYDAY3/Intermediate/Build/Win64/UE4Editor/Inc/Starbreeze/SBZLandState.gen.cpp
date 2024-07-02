// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLandState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLandState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLandState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLandState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleStateMachine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleState_NoRegister();
// End Cross Module References
	void USBZLandState::StaticRegisterNativesUSBZLandState()
	{
	}
	UClass* Z_Construct_UClass_USBZLandState_NoRegister()
	{
		return USBZLandState::StaticClass();
	}
	struct Z_Construct_UClass_USBZLandState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLandState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLandState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLandState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLandState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLandState_Statics::NewProp_StateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLandState" },
		{ "ModuleRelativePath", "Public/SBZLandState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLandState_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLandState, StateMachine), Z_Construct_UClass_USBZAerialVehicleStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLandState_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLandState_Statics::NewProp_StateMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLandState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLandState_Statics::NewProp_StateMachine,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZLandState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAerialVehicleState_NoRegister, (int32)VTABLE_OFFSET(USBZLandState, ISBZAerialVehicleState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLandState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLandState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLandState_Statics::ClassParams = {
		&USBZLandState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLandState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLandState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLandState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLandState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLandState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLandState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLandState, 177482584);
	template<> STARBREEZE_API UClass* StaticClass<USBZLandState>()
	{
		return USBZLandState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLandState(Z_Construct_UClass_USBZLandState, &USBZLandState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLandState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLandState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
