// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomConnectorVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomConnectorVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomConnectorVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomConnectorVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
// End Cross Module References
	void ASBZRoomConnectorVolume::StaticRegisterNativesASBZRoomConnectorVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZRoomConnectorVolume_NoRegister()
	{
		return ASBZRoomConnectorVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZRoomConnectorVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsAIBreach_MetaData[];
#endif
		static void NewProp_bWantsAIBreach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAIBreach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectorRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZRoomConnectorVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach_SetBit(void* Obj)
	{
		((ASBZRoomConnectorVolume*)Obj)->bWantsAIBreach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach = { "bWantsAIBreach", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZRoomConnectorVolume), &Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomA = { "RoomA", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomConnectorVolume, RoomA), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomB = { "RoomB", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomConnectorVolume, RoomB), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_Gate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_Gate = { "Gate", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomConnectorVolume, Gate), Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_Gate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_Gate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorLocation = { "ConnectorLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomConnectorVolume, ConnectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorVolume" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorRotation = { "ConnectorRotation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomConnectorVolume, ConnectorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_bWantsAIBreach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_RoomB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_Gate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::NewProp_ConnectorRotation,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZRoomConnectorVolume, ISBZRoomConnectorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZRoomConnectorVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::ClassParams = {
		&ASBZRoomConnectorVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZRoomConnectorVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZRoomConnectorVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZRoomConnectorVolume, 904338390);
	template<> STARBREEZE_API UClass* StaticClass<ASBZRoomConnectorVolume>()
	{
		return ASBZRoomConnectorVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZRoomConnectorVolume(Z_Construct_UClass_ASBZRoomConnectorVolume, &ASBZRoomConnectorVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZRoomConnectorVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZRoomConnectorVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
