// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerLookAtTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerLookAtTrigger() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerLookAtTrigger_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerLookAtTrigger();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPawnDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBooleanStateDynamicDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLookAtData();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASBZPlayerLookAtTrigger::StaticRegisterNativesASBZPlayerLookAtTrigger()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlayerLookAtTrigger_NoRegister()
	{
		return ASBZPlayerLookAtTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerBeginLookAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerBeginLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerEndLookAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerEndLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayerLookAtChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AllPlayerLookAtChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisabledWhenPlayerLookAt_MetaData[];
#endif
		static void NewProp_bIsDisabledWhenPlayerLookAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisabledWhenPlayerLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisabledWhenAllPlayersLookAt_MetaData[];
#endif
		static void NewProp_bIsDisabledWhenAllPlayersLookAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisabledWhenAllPlayersLookAt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtPawns_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookAtPawns_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LookAtPawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DotAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAtTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLineOfSightRequired_MetaData[];
#endif
		static void NewProp_bIsLineOfSightRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLineOfSightRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerTriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPlayerLookAtTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerBeginLookAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerBeginLookAt = { "PlayerBeginLookAt", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, PlayerBeginLookAt), Z_Construct_UDelegateFunction_Starbreeze_SBZPawnDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerBeginLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerBeginLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerEndLookAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerEndLookAt = { "PlayerEndLookAt", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, PlayerEndLookAt), Z_Construct_UDelegateFunction_Starbreeze_SBZPawnDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerEndLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerEndLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_AllPlayerLookAtChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_AllPlayerLookAtChanged = { "AllPlayerLookAtChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, AllPlayerLookAtChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZBooleanStateDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_AllPlayerLookAtChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_AllPlayerLookAtChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt_SetBit(void* Obj)
	{
		((ASBZPlayerLookAtTrigger*)Obj)->bIsDisabledWhenPlayerLookAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt = { "bIsDisabledWhenPlayerLookAt", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZPlayerLookAtTrigger), &Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt_SetBit(void* Obj)
	{
		((ASBZPlayerLookAtTrigger*)Obj)->bIsDisabledWhenAllPlayersLookAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt = { "bIsDisabledWhenAllPlayersLookAt", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZPlayerLookAtTrigger), &Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_ValueProp = { "LookAtPawns", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPlayerLookAtData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_Key_KeyProp = { "LookAtPawns_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns = { "LookAtPawns", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, LookAtPawns), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_DotAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_DotAngle = { "DotAngle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, DotAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_DotAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_DotAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtTime = { "LookAtTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, LookAtTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerLookAtTrigger, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLookAtTrigger" },
		{ "ModuleRelativePath", "Public/SBZPlayerLookAtTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired_SetBit(void* Obj)
	{
		((ASBZPlayerLookAtTrigger*)Obj)->bIsLineOfSightRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired = { "bIsLineOfSightRequired", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerLookAtTrigger), &Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerBeginLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_PlayerEndLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_AllPlayerLookAtChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenPlayerLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsDisabledWhenAllPlayersLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_DotAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::NewProp_bIsLineOfSightRequired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerLookAtTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::ClassParams = {
		&ASBZPlayerLookAtTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerLookAtTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerLookAtTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerLookAtTrigger, 733148452);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerLookAtTrigger>()
	{
		return ASBZPlayerLookAtTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerLookAtTrigger(Z_Construct_UClass_ASBZPlayerLookAtTrigger, &ASBZPlayerLookAtTrigger::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerLookAtTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerLookAtTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
