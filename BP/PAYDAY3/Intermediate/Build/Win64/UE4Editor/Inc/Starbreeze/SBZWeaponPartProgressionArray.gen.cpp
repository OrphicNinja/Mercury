// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartProgressionArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartProgressionArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgression();
// End Cross Module References
class UScriptStruct* FSBZWeaponPartProgressionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPartProgressionArray"), sizeof(FSBZWeaponPartProgressionArray), Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPartProgressionArray>()
{
	return FSBZWeaponPartProgressionArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPartProgressionArray(FSBZWeaponPartProgressionArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPartProgressionArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPartProgressionArray>(FName(TEXT("SBZWeaponPartProgressionArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionArray;
	struct Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseWeapon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPartProgressionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponPartProgressionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPartProgressionArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_BaseWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionArray" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionArray.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_BaseWeapon = { "BaseWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionArray, BaseWeapon), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_BaseWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_BaseWeapon_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray_Inner = { "WeaponPartProgressionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponPartProgression, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionArray" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray = { "WeaponPartProgressionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionArray, WeaponPartProgressionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_BaseWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::NewProp_WeaponPartProgressionArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPartProgressionArray",
		sizeof(FSBZWeaponPartProgressionArray),
		alignof(FSBZWeaponPartProgressionArray),
		Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPartProgressionArray"), sizeof(FSBZWeaponPartProgressionArray), Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray_Hash() { return 1078732497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
