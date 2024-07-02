// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIVisibilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIVisibilityComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void USBZAIVisibilityComponent::StaticRegisterNativesUSBZAIVisibilityComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister()
	{
		return USBZAIVisibilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIVisibilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadyForUse_MetaData[];
#endif
		static void NewProp_bReadyForUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadyForUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInRandomSublevel_MetaData[];
#endif
		static void NewProp_bIsInRandomSublevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInRandomSublevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStandHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterStandHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterCrouchHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterCrouchHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbSubRaycastPerPolarCoord_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbSubRaycastPerPolarCoord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubRaycastSideDistFromCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSubRaycastSideDistFromCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbSubRaycastPerPolarCoordCoverPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbSubRaycastPerPolarCoordCoverPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubRaycastSideDistFromCenterCoverPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSubRaycastSideDistFromCenterCoverPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFinishedBuilding_MetaData[];
#endif
		static void NewProp_bHasFinishedBuilding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFinishedBuilding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParsingDynNode_MetaData[];
#endif
		static void NewProp_bIsParsingDynNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParsingDynNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynVerticesHavedBeenTransformed_MetaData[];
#endif
		static void NewProp_bDynVerticesHavedBeenTransformed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynVerticesHavedBeenTransformed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIVisibilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIVisibilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse_SetBit(void* Obj)
	{
		((USBZAIVisibilityComponent*)Obj)->bReadyForUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse = { "bReadyForUse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisibilityComponent), &Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel_SetBit(void* Obj)
	{
		((USBZAIVisibilityComponent*)Obj)->bIsInRandomSublevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel = { "bIsInRandomSublevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisibilityComponent), &Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterStandHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterStandHeight = { "CharacterStandHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, CharacterStandHeight), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterStandHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterStandHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterCrouchHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterCrouchHeight = { "CharacterCrouchHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, CharacterCrouchHeight), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterCrouchHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterCrouchHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoord_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoord = { "NbSubRaycastPerPolarCoord", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, NbSubRaycastPerPolarCoord), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenter = { "MaxSubRaycastSideDistFromCenter", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, MaxSubRaycastSideDistFromCenter), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoordCoverPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoordCoverPoint = { "NbSubRaycastPerPolarCoordCoverPoint", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, NbSubRaycastPerPolarCoordCoverPoint), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoordCoverPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoordCoverPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenterCoverPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenterCoverPoint = { "MaxSubRaycastSideDistFromCenterCoverPoint", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisibilityComponent, MaxSubRaycastSideDistFromCenterCoverPoint), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenterCoverPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenterCoverPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding_SetBit(void* Obj)
	{
		((USBZAIVisibilityComponent*)Obj)->bHasFinishedBuilding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding = { "bHasFinishedBuilding", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisibilityComponent), &Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode_SetBit(void* Obj)
	{
		((USBZAIVisibilityComponent*)Obj)->bIsParsingDynNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode = { "bIsParsingDynNode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisibilityComponent), &Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed_SetBit(void* Obj)
	{
		((USBZAIVisibilityComponent*)Obj)->bDynVerticesHavedBeenTransformed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed = { "bDynVerticesHavedBeenTransformed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisibilityComponent), &Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIVisibilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bReadyForUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsInRandomSublevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterStandHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_CharacterCrouchHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_NbSubRaycastPerPolarCoordCoverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_MaxSubRaycastSideDistFromCenterCoverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bHasFinishedBuilding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bIsParsingDynNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisibilityComponent_Statics::NewProp_bDynVerticesHavedBeenTransformed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIVisibilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIVisibilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIVisibilityComponent_Statics::ClassParams = {
		&USBZAIVisibilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIVisibilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIVisibilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIVisibilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIVisibilityComponent, 905328777);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIVisibilityComponent>()
	{
		return USBZAIVisibilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIVisibilityComponent(Z_Construct_UClass_USBZAIVisibilityComponent, &USBZAIVisibilityComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIVisibilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIVisibilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
