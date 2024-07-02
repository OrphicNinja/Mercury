// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameSpectatorPawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameSpectatorPawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameSpectatorPawn();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpectateCameraSettings();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSpectateTargetChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASBZGameSpectatorPawn::StaticRegisterNativesASBZGameSpectatorPawn()
	{
	}
	UClass* Z_Construct_UClass_ASBZGameSpectatorPawn_NoRegister()
	{
		return ASBZGameSpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGameSpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectateCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControllerDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDefeatedTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraDefeatedTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpectateTargetChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpectateTargetChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadTargetDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadTargetDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectateTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZGameSpectatorPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, SpringArm), Z_Construct_UClass_USBZSpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateCamera = { "SpectateCamera", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, SpectateCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_ControllerDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_ControllerDeadZone = { "ControllerDeadZone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, ControllerDeadZone), METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_ControllerDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_ControllerDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_AttachSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, AttachSocket), METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_AttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_AttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefault = { "CameraDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, CameraDefault), Z_Construct_UScriptStruct_FSBZSpectateCameraSettings, METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefeatedTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefeatedTarget = { "CameraDefeatedTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, CameraDefeatedTarget), Z_Construct_UScriptStruct_FSBZSpectateCameraSettings, METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefeatedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefeatedTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_OnSpectateTargetChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_OnSpectateTargetChanged = { "OnSpectateTargetChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, OnSpectateTargetChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZSpectateTargetChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_OnSpectateTargetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_OnSpectateTargetChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_DeadTargetDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_DeadTargetDelay = { "DeadTargetDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, DeadTargetDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_DeadTargetDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_DeadTargetDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZGameSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateTarget = { "SpectateTarget", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameSpectatorPawn, SpectateTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_ControllerDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_AttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_CameraDefeatedTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_OnSpectateTargetChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_DeadTargetDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::NewProp_SpectateTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGameSpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::ClassParams = {
		&ASBZGameSpectatorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGameSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGameSpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGameSpectatorPawn, 2255536271);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGameSpectatorPawn>()
	{
		return ASBZGameSpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGameSpectatorPawn(Z_Construct_UClass_ASBZGameSpectatorPawn, &ASBZGameSpectatorPawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGameSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGameSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
