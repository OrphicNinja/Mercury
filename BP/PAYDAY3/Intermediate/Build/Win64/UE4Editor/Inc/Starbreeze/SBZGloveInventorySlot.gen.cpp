// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZGloveInventorySlot>() == std::is_polymorphic<FSBZInventorySlot>(), "USTRUCT FSBZGloveInventorySlot cannot be polymorphic unless super FSBZInventorySlot is polymorphic");

class UScriptStruct* FSBZGloveInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGloveInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGloveInventorySlot"), sizeof(FSBZGloveInventorySlot), Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGloveInventorySlot>()
{
	return FSBZGloveInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGloveInventorySlot(FSBZGloveInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGloveInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZGloveInventorySlot>(FName(TEXT("SBZGloveInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveInSlotEntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveInSlotEntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveInSlotAccelByteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveInSlotAccelByteItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGloveInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotEntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotEntitlementId = { "GloveInSlotEntitlementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveInventorySlot, GloveInSlotEntitlementId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotEntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotEntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotAccelByteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotAccelByteItemId = { "GloveInSlotAccelByteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveInventorySlot, GloveInSlotAccelByteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotAccelByteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotAccelByteItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveData = { "GloveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveInventorySlot, GloveData), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotEntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveInSlotAccelByteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::NewProp_GloveData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventorySlot,
		&NewStructOps,
		"SBZGloveInventorySlot",
		sizeof(FSBZGloveInventorySlot),
		alignof(FSBZGloveInventorySlot),
		Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGloveInventorySlot"), sizeof(FSBZGloveInventorySlot), Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlot_Hash() { return 2032704160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
