// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityCameraDetectionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityCameraDetectionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionGeneratorInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSecurityCameraDetectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSecurityCameraDetectionData"), sizeof(FSBZSecurityCameraDetectionData), Get_Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSecurityCameraDetectionData>()
{
	return FSBZSecurityCameraDetectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSecurityCameraDetectionData(FSBZSecurityCameraDetectionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSecurityCameraDetectionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityCameraDetectionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityCameraDetectionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSecurityCameraDetectionData>(FName(TEXT("SBZSecurityCameraDetectionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityCameraDetectionData;
	struct Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPerceived_MetaData[];
#endif
		static void NewProp_bIsPerceived_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPerceived;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetectionLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetectionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionGeneratorInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_VisionGeneratorInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCameraDetectionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSecurityCameraDetectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCameraDetectionData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCameraDetectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCameraDetectionData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_CurrentDetection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCameraDetectionData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCameraDetectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_CurrentDetection = { "CurrentDetection", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCameraDetectionData, CurrentDetection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_CurrentDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_CurrentDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCameraDetectionData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCameraDetectionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived_SetBit(void* Obj)
	{
		((FSBZSecurityCameraDetectionData*)Obj)->bIsPerceived = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived = { "bIsPerceived", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSecurityCameraDetectionData), &Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCameraDetectionData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCameraDetectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel = { "DetectionLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCameraDetectionData, DetectionLevel), Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_VisionGeneratorInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCameraDetectionData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCameraDetectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_VisionGeneratorInterface = { "VisionGeneratorInterface", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCameraDetectionData, VisionGeneratorInterface), Z_Construct_UClass_USBZAIVisualDetectionGeneratorInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_VisionGeneratorInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_VisionGeneratorInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_CurrentDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_bIsPerceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_DetectionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::NewProp_VisionGeneratorInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSecurityCameraDetectionData",
		sizeof(FSBZSecurityCameraDetectionData),
		alignof(FSBZSecurityCameraDetectionData),
		Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSecurityCameraDetectionData"), sizeof(FSBZSecurityCameraDetectionData), Get_Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData_Hash() { return 511921035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
