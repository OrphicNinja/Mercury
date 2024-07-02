// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_UpdateWard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_UpdateWard() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateWard_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateWard();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void USBZBTService_UpdateWard::StaticRegisterNativesUSBZBTService_UpdateWard()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_UpdateWard_NoRegister()
	{
		return USBZBTService_UpdateWard::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_UpdateWard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWardBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentWardBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WardHasMovedBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WardHasMovedBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WardUpdateDistance2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WardUpdateDistance2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WardUpdateDistanceZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WardUpdateDistanceZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStealthState_MetaData[];
#endif
		static void NewProp_bIsStealthState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStealthState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_UpdateWard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_UpdateWard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_CurrentWardBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateWard" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_CurrentWardBBKey = { "CurrentWardBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateWard, CurrentWardBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_CurrentWardBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_CurrentWardBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateWard" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateWard, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_EQSRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardHasMovedBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateWard" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardHasMovedBBKey = { "WardHasMovedBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateWard, WardHasMovedBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardHasMovedBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardHasMovedBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistance2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateWard" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistance2D = { "WardUpdateDistance2D", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateWard, WardUpdateDistance2D), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistance2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistance2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistanceZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateWard" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistanceZ = { "WardUpdateDistanceZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateWard, WardUpdateDistanceZ), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistanceZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistanceZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateWard" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateWard.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState_SetBit(void* Obj)
	{
		((USBZBTService_UpdateWard*)Obj)->bIsStealthState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState = { "bIsStealthState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTService_UpdateWard), &Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_UpdateWard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_CurrentWardBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_EQSRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardHasMovedBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistance2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_WardUpdateDistanceZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateWard_Statics::NewProp_bIsStealthState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_UpdateWard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_UpdateWard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_UpdateWard_Statics::ClassParams = {
		&USBZBTService_UpdateWard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_UpdateWard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateWard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_UpdateWard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_UpdateWard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_UpdateWard, 307236619);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_UpdateWard>()
	{
		return USBZBTService_UpdateWard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_UpdateWard(Z_Construct_UClass_USBZBTService_UpdateWard, &USBZBTService_UpdateWard::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_UpdateWard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_UpdateWard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
