// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDsStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDsStateMachine() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachine();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCommonStateMachine();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDS_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteServerLifeCycle_NoRegister();
// End Cross Module References
	void USBZDsStateMachine::StaticRegisterNativesUSBZDsStateMachine()
	{
	}
	UClass* Z_Construct_UClass_USBZDsStateMachine_NoRegister()
	{
		return USBZDsStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_USBZDsStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateEnums_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateEnums_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateEnums_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StateEnums;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteDS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteServerLifeCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteServerLifeCycle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDsStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCommonStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDsStateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDsStateMachine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDsStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_ValueProp = { "StateEnums", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_Key_KeyProp = { "StateEnums_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDsStateMachine" },
		{ "ModuleRelativePath", "Public/SBZDsStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums = { "StateEnums", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDsStateMachine, StateEnums), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteDS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDsStateMachine" },
		{ "ModuleRelativePath", "Public/SBZDsStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteDS = { "AccelByteDS", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDsStateMachine, AccelByteDS), Z_Construct_UClass_USBZAccelByteDS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteDS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteDS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteServerLifeCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDsStateMachine" },
		{ "ModuleRelativePath", "Public/SBZDsStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteServerLifeCycle = { "AccelByteServerLifeCycle", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDsStateMachine, AccelByteServerLifeCycle), Z_Construct_UClass_USBZAccelByteServerLifeCycle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteServerLifeCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteServerLifeCycle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDsStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_StateEnums,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteDS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDsStateMachine_Statics::NewProp_AccelByteServerLifeCycle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDsStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDsStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDsStateMachine_Statics::ClassParams = {
		&USBZDsStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDsStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDsStateMachine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDsStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDsStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDsStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDsStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDsStateMachine, 565408650);
	template<> STARBREEZE_API UClass* StaticClass<USBZDsStateMachine>()
	{
		return USBZDsStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDsStateMachine(Z_Construct_UClass_USBZDsStateMachine, &USBZDsStateMachine::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDsStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDsStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
