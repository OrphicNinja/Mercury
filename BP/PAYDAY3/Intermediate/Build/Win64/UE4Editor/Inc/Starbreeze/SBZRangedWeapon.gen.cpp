// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRangedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRangedWeapon() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponAmmoData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	void ASBZRangedWeapon::StaticRegisterNativesASBZRangedWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASBZRangedWeapon_NoRegister()
	{
		return ASBZRangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASBZRangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEmitterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireEmitterMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEffectSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FireEffectSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShellEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShellEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShellEffectSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShellEffectSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRecoilShellEffect_MetaData[];
#endif
		static void NewProp_bIsRecoilShellEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRecoilShellEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShellEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShellEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceEffectLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceEffectComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceEffectComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotsBeforeAutoFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotsBeforeAutoFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleFireEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingleFireEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoFireStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoFireStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoFireStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoFireStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPEnterTargetingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPEnterTargetingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPExitTargetingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPExitTargetingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryFireEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DryFireEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInMagazineRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AmmoInMagazineRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoMeshComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoMeshComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoMeshComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AmmoMeshComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAmmoData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedAmmoLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DroppedAmmoLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberMeshArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChamberMeshArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberMeshArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChamberMeshArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRangedWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffect = { "FireEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, FireEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEmitterMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEmitterMesh = { "FireEmitterMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, FireEmitterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEmitterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEmitterMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectSocket = { "FireEffectSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, FireEffectSocket), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectComponent = { "FireEffectComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, FireEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffect = { "ShellEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, ShellEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectSocket = { "ShellEffectSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, ShellEffectSocket), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect_SetBit(void* Obj)
	{
		((ASBZRangedWeapon*)Obj)->bIsRecoilShellEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect = { "bIsRecoilShellEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZRangedWeapon), &Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectComponent = { "ShellEffectComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, ShellEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffect = { "TraceEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, TraceEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectLength = { "TraceEffectLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, TraceEffectLength), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_Inner = { "TraceEffectComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray = { "TraceEffectComponentArray", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, TraceEffectComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShotsBeforeAutoFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShotsBeforeAutoFire = { "ShotsBeforeAutoFire", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, ShotsBeforeAutoFire), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShotsBeforeAutoFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShotsBeforeAutoFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_SingleFireEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_SingleFireEvent = { "SingleFireEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, SingleFireEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_SingleFireEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_SingleFireEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStartEvent = { "AutoFireStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, AutoFireStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStopEvent = { "AutoFireStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, AutoFireStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPEnterTargetingEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPEnterTargetingEvent = { "FPEnterTargetingEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, FPEnterTargetingEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPEnterTargetingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPEnterTargetingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPExitTargetingEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPExitTargetingEvent = { "FPExitTargetingEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, FPExitTargetingEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPExitTargetingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPExitTargetingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DryFireEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DryFireEvent = { "DryFireEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, DryFireEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DryFireEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DryFireEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoInMagazineRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoInMagazineRTPC = { "AmmoInMagazineRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, AmmoInMagazineRTPC), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoInMagazineRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoInMagazineRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_Inner = { "AmmoMeshComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray = { "AmmoMeshComponentArray", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, AmmoMeshComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_CurrentAmmoData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_CurrentAmmoData = { "CurrentAmmoData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, CurrentAmmoData), Z_Construct_UClass_USBZWeaponAmmoData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_CurrentAmmoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_CurrentAmmoData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoEquipped = { "AmmoEquipped", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, AmmoEquipped), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoLoaded = { "AmmoLoaded", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, AmmoLoaded), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DroppedAmmoLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DroppedAmmoLoaded = { "DroppedAmmoLoaded", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, DroppedAmmoLoaded), METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DroppedAmmoLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DroppedAmmoLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_Inner = { "ChamberMeshArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray = { "ChamberMeshArray", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRangedWeapon, ChamberMeshArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZRangedWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEmitterMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FireEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_bIsRecoilShellEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShellEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_TraceEffectComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ShotsBeforeAutoFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_SingleFireEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AutoFireStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPEnterTargetingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_FPExitTargetingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DryFireEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoInMagazineRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoMeshComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_CurrentAmmoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_AmmoLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_DroppedAmmoLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRangedWeapon_Statics::NewProp_ChamberMeshArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZRangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZRangedWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZRangedWeapon_Statics::ClassParams = {
		&ASBZRangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZRangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZRangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZRangedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZRangedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZRangedWeapon, 559592892);
	template<> STARBREEZE_API UClass* StaticClass<ASBZRangedWeapon>()
	{
		return ASBZRangedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZRangedWeapon(Z_Construct_UClass_ASBZRangedWeapon, &ASBZRangedWeapon::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZRangedWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZRangedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
