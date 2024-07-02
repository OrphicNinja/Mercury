// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnableAgilityIKNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnableAgilityIKNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnableAgilityIKNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnableAgilityIKNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityIKHandIKType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZEnableAgilityIKNotifyState::StaticRegisterNativesUSBZEnableAgilityIKNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZEnableAgilityIKNotifyState_NoRegister()
	{
		return USBZEnableAgilityIKNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandIKType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandIKType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandIKType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyAffectZ_MetaData[];
#endif
		static void NewProp_bOnlyAffectZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyAffectZ;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PointType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PointType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZEnableAgilityIKNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnableAgilityIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType = { "HandIKType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnableAgilityIKNotifyState, HandIKType), Z_Construct_UEnum_Starbreeze_ESBZAgilityIKHandIKType, METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendInDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnableAgilityIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendInDuration = { "BlendInDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnableAgilityIKNotifyState, BlendInDuration), METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnableAgilityIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnableAgilityIKNotifyState, BlendOutDuration), METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnableAgilityIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ_SetBit(void* Obj)
	{
		((USBZEnableAgilityIKNotifyState*)Obj)->bOnlyAffectZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ = { "bOnlyAffectZ", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnableAgilityIKNotifyState), &Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnableAgilityIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType = { "PointType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnableAgilityIKNotifyState, PointType), Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnableAgilityIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZEnableAgilityIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnableAgilityIKNotifyState, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_LocationOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_HandIKType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_BlendOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_bOnlyAffectZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_PointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::NewProp_LocationOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnableAgilityIKNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::ClassParams = {
		&USBZEnableAgilityIKNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnableAgilityIKNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnableAgilityIKNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnableAgilityIKNotifyState, 2840788084);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnableAgilityIKNotifyState>()
	{
		return USBZEnableAgilityIKNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnableAgilityIKNotifyState(Z_Construct_UClass_USBZEnableAgilityIKNotifyState, &USBZEnableAgilityIKNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnableAgilityIKNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnableAgilityIKNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
