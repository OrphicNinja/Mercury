// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCablePointAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCablePointAttachment() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCablePointAttachment();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
class UScriptStruct* FSBZCablePointAttachment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCablePointAttachment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCablePointAttachment, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCablePointAttachment"), sizeof(FSBZCablePointAttachment), Get_Z_Construct_UScriptStruct_FSBZCablePointAttachment_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCablePointAttachment>()
{
	return FSBZCablePointAttachment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCablePointAttachment(FSBZCablePointAttachment::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCablePointAttachment"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCablePointAttachment
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCablePointAttachment()
	{
		UScriptStruct::DeferCppStructOps<FSBZCablePointAttachment>(FName(TEXT("SBZCablePointAttachment")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCablePointAttachment;
	struct Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachToSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdatePointIndex_MetaData[];
#endif
		static void NewProp_bAutoUpdatePointIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdatePointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStretchFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentStretchFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToCableLength_MetaData[];
#endif
		static void NewProp_bRelativeToCableLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToCableLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoWinding_MetaData[];
#endif
		static void NewProp_bAutoWinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoWinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopAutoWindingAtFirstLockedPoint_MetaData[];
#endif
		static void NewProp_bStopAutoWindingAtFirstLockedPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopAutoWindingAtFirstLockedPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCablePointAttachment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_PointIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCablePointAttachment, PointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_PointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_PointIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCablePointAttachment, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachTo = { "AttachTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCablePointAttachment, AttachTo), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachToSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachToSocketName = { "AttachToSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCablePointAttachment, AttachToSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachToSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachToSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex_SetBit(void* Obj)
	{
		((FSBZCablePointAttachment*)Obj)->bAutoUpdatePointIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex = { "bAutoUpdatePointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCablePointAttachment), &Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_SegmentStretchFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_SegmentStretchFactor = { "SegmentStretchFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCablePointAttachment, SegmentStretchFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_SegmentStretchFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_SegmentStretchFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength_SetBit(void* Obj)
	{
		((FSBZCablePointAttachment*)Obj)->bRelativeToCableLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength = { "bRelativeToCableLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCablePointAttachment), &Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding_SetBit(void* Obj)
	{
		((FSBZCablePointAttachment*)Obj)->bAutoWinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding = { "bAutoWinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCablePointAttachment), &Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint_SetBit(void* Obj)
	{
		((FSBZCablePointAttachment*)Obj)->bStopAutoWindingAtFirstLockedPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint = { "bStopAutoWindingAtFirstLockedPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCablePointAttachment), &Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_WindingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCablePointAttachment" },
		{ "ModuleRelativePath", "Public/SBZCablePointAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_WindingSpeed = { "WindingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCablePointAttachment, WindingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_WindingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_WindingSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_PointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_AttachToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoUpdatePointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_SegmentStretchFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bRelativeToCableLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bAutoWinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_bStopAutoWindingAtFirstLockedPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::NewProp_WindingSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCablePointAttachment",
		sizeof(FSBZCablePointAttachment),
		alignof(FSBZCablePointAttachment),
		Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCablePointAttachment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCablePointAttachment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCablePointAttachment"), sizeof(FSBZCablePointAttachment), Get_Z_Construct_UScriptStruct_FSBZCablePointAttachment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCablePointAttachment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCablePointAttachment_Hash() { return 4293131140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
