// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMask() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMask_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMask();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
// End Cross Module References
	void ASBZMask::StaticRegisterNativesASBZMask()
	{
	}
	UClass* Z_Construct_UClass_ASBZMask_NoRegister()
	{
		return ASBZMask::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskSkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrapSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrapSkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedCollisionWithCharacter_MetaData[];
#endif
		static void NewProp_bNeedCollisionWithCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedCollisionWithCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOnMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskOnMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaskOn_MetaData[];
#endif
		static void NewProp_bIsMaskOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaskOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRendered1P_MetaData[];
#endif
		static void NewProp_bIsRendered1P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRendered1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskSkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskSkeletalMeshComponent = { "MaskSkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMask, MaskSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskSkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskStaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskStaticMeshComponent = { "MaskStaticMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMask, MaskStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_StrapSkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_StrapSkeletalMeshComponent = { "StrapSkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMask, StrapSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_StrapSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_StrapSkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter_SetBit(void* Obj)
	{
		((ASBZMask*)Obj)->bNeedCollisionWithCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter = { "bNeedCollisionWithCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMask), &Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskOnMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskOnMontage = { "MaskOnMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMask, MaskOnMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskOnMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskOnMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn_SetBit(void* Obj)
	{
		((ASBZMask*)Obj)->bIsMaskOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn = { "bIsMaskOn", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMask), &Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P_SetBit(void* Obj)
	{
		((ASBZMask*)Obj)->bIsRendered1P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P = { "bIsRendered1P", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMask), &Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMask" },
		{ "ModuleRelativePath", "Public/SBZMask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskConfig = { "MaskConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMask, MaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskSkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_StrapSkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_bNeedCollisionWithCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskOnMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsMaskOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_bIsRendered1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMask_Statics::NewProp_MaskConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMask_Statics::ClassParams = {
		&ASBZMask::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZMask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMask, 2909197054);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMask>()
	{
		return ASBZMask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMask(Z_Construct_UClass_ASBZMask, &ASBZMask::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
