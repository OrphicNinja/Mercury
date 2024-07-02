// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDeltaCorrectionNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDeltaCorrectionNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UAnimNotifyState_WarpingBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UAnimNotifyState_WarpingBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeltaCorrectionNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeltaCorrectionNotifyState();
// End Cross Module References
	void UAnimNotifyState_WarpingBase::StaticRegisterNativesUAnimNotifyState_WarpingBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_WarpingBase_NoRegister()
	{
		return UAnimNotifyState_WarpingBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDeltaCorrectionNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_WarpingBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::ClassParams = {
		&UAnimNotifyState_WarpingBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_WarpingBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_WarpingBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_WarpingBase, 2245370701);
	template<> STARBREEZE_API UClass* StaticClass<UAnimNotifyState_WarpingBase>()
	{
		return UAnimNotifyState_WarpingBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_WarpingBase(Z_Construct_UClass_UAnimNotifyState_WarpingBase, &UAnimNotifyState_WarpingBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UAnimNotifyState_WarpingBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_WarpingBase);
	void USBZDeltaCorrectionNotifyState::StaticRegisterNativesUSBZDeltaCorrectionNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZDeltaCorrectionNotifyState_NoRegister()
	{
		return USBZDeltaCorrectionNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCorrectTranslation_MetaData[];
#endif
		static void NewProp_bCorrectTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCorrectTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxis_MetaData[];
#endif
		static void NewProp_bIgnoreZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCorrectRotation_MetaData[];
#endif
		static void NewProp_bCorrectRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCorrectRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderRemainingRootMotion_MetaData[];
#endif
		static void NewProp_bConsiderRemainingRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderRemainingRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceActorStartWorld_MetaData[];
#endif
		static void NewProp_bReplaceActorStartWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceActorStartWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReferenceBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OffsetBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReferenceTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_WarpingBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDeltaCorrectionNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation_SetBit(void* Obj)
	{
		((USBZDeltaCorrectionNotifyState*)Obj)->bCorrectTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation = { "bCorrectTranslation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDeltaCorrectionNotifyState), &Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis_SetBit(void* Obj)
	{
		((USBZDeltaCorrectionNotifyState*)Obj)->bIgnoreZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis = { "bIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDeltaCorrectionNotifyState), &Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation_SetBit(void* Obj)
	{
		((USBZDeltaCorrectionNotifyState*)Obj)->bCorrectRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation = { "bCorrectRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDeltaCorrectionNotifyState), &Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion_SetBit(void* Obj)
	{
		((USBZDeltaCorrectionNotifyState*)Obj)->bConsiderRemainingRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion = { "bConsiderRemainingRootMotion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDeltaCorrectionNotifyState), &Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld_SetBit(void* Obj)
	{
		((USBZDeltaCorrectionNotifyState*)Obj)->bReplaceActorStartWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld = { "bReplaceActorStartWorld", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDeltaCorrectionNotifyState), &Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceBone = { "ReferenceBone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDeltaCorrectionNotifyState, ReferenceBone), METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_OffsetBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_OffsetBone = { "OffsetBone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDeltaCorrectionNotifyState, OffsetBone), METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_OffsetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_OffsetBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDeltaCorrectionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDeltaCorrectionNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceTime = { "ReferenceTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDeltaCorrectionNotifyState, ReferenceTime), METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bIgnoreZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bCorrectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bConsiderRemainingRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_bReplaceActorStartWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_OffsetBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::NewProp_ReferenceTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDeltaCorrectionNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::ClassParams = {
		&USBZDeltaCorrectionNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDeltaCorrectionNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDeltaCorrectionNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDeltaCorrectionNotifyState, 653986287);
	template<> STARBREEZE_API UClass* StaticClass<USBZDeltaCorrectionNotifyState>()
	{
		return USBZDeltaCorrectionNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDeltaCorrectionNotifyState(Z_Construct_UClass_USBZDeltaCorrectionNotifyState, &USBZDeltaCorrectionNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDeltaCorrectionNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDeltaCorrectionNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
