// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_RoomPathfinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_RoomPathfinding() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEnvTestPathfindingDetail();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter();
// End Cross Module References
	void USBZEnvQueryTest_RoomPathfinding::StaticRegisterNativesUSBZEnvQueryTest_RoomPathfinding()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_NoRegister()
	{
		return USBZEnvQueryTest_RoomPathfinding::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Detail_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Detail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFromContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathFromContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipUnreachable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkipUnreachable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavFilterProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavFilterProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLockedExpensive_MetaData[];
#endif
		static void NewProp_bIsLockedExpensive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLockedExpensive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_RoomPathfinding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_RoomPathfinding, Detail), Z_Construct_UEnum_Starbreeze_ESBZEnvTestPathfindingDetail, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Context_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_RoomPathfinding, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_RoomContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_RoomContext = { "RoomContext", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_RoomPathfinding, RoomContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_RoomContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_RoomContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_PathFromContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_PathFromContext = { "PathFromContext", nullptr, (EPropertyFlags)0x0020088000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_RoomPathfinding, PathFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_PathFromContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_PathFromContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_SkipUnreachable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_SkipUnreachable = { "SkipUnreachable", nullptr, (EPropertyFlags)0x00200c8000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_RoomPathfinding, SkipUnreachable), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_SkipUnreachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_SkipUnreachable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_NavFilterProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_NavFilterProvider = { "NavFilterProvider", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_RoomPathfinding, NavFilterProvider), Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_NavFilterProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_NavFilterProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_RoomPathfinding" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_RoomPathfinding.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive_SetBit(void* Obj)
	{
		((USBZEnvQueryTest_RoomPathfinding*)Obj)->bIsLockedExpensive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive = { "bIsLockedExpensive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnvQueryTest_RoomPathfinding), &Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Detail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_RoomContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_PathFromContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_SkipUnreachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_NavFilterProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::NewProp_bIsLockedExpensive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_RoomPathfinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::ClassParams = {
		&USBZEnvQueryTest_RoomPathfinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_RoomPathfinding, 1631365518);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_RoomPathfinding>()
	{
		return USBZEnvQueryTest_RoomPathfinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_RoomPathfinding(Z_Construct_UClass_USBZEnvQueryTest_RoomPathfinding, &USBZEnvQueryTest_RoomPathfinding::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_RoomPathfinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_RoomPathfinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
