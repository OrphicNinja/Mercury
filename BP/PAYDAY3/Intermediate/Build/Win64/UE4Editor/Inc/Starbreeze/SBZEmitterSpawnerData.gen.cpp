// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEmitterSpawnerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEmitterSpawnerData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmitterSpawnerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmitterSpawnerData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
// End Cross Module References
	void USBZEmitterSpawnerData::StaticRegisterNativesUSBZEmitterSpawnerData()
	{
	}
	UClass* Z_Construct_UClass_USBZEmitterSpawnerData_NoRegister()
	{
		return USBZEmitterSpawnerData::StaticClass();
	}
	struct Z_Construct_UClass_USBZEmitterSpawnerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachPointName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDestroy_MetaData[];
#endif
		static void NewProp_AutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoActivate_MetaData[];
#endif
		static void NewProp_AutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEmitterSpawnerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEmitterSpawnerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_ParticleEmitter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_ParticleEmitter = { "ParticleEmitter", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, ParticleEmitter), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_ParticleEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_ParticleEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachPointName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, AttachPointName), METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachPointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachPointName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule = { "AttachmentRule", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, AttachmentRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	void Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((USBZEmitterSpawnerData*)Obj)->AutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEmitterSpawnerData), &Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmitterSpawnerData, PoolingMethod), Z_Construct_UEnum_Engine_EPSCPoolMethod, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmitterSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZEmitterSpawnerData.h" },
	};
#endif
	void Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate_SetBit(void* Obj)
	{
		((USBZEmitterSpawnerData*)Obj)->AutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate = { "AutoActivate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEmitterSpawnerData), &Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEmitterSpawnerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_ParticleEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AttachmentRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_PoolingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmitterSpawnerData_Statics::NewProp_AutoActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEmitterSpawnerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEmitterSpawnerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEmitterSpawnerData_Statics::ClassParams = {
		&USBZEmitterSpawnerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEmitterSpawnerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmitterSpawnerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEmitterSpawnerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEmitterSpawnerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEmitterSpawnerData, 2631421286);
	template<> STARBREEZE_API UClass* StaticClass<USBZEmitterSpawnerData>()
	{
		return USBZEmitterSpawnerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEmitterSpawnerData(Z_Construct_UClass_USBZEmitterSpawnerData, &USBZEmitterSpawnerData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEmitterSpawnerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEmitterSpawnerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
