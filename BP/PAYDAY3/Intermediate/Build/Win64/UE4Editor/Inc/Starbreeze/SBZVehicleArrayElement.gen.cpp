// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleArrayElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleArrayElement() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleArrayElement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVehicleArrayElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleArrayElement, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleArrayElement"), sizeof(FSBZVehicleArrayElement), Get_Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleArrayElement>()
{
	return FSBZVehicleArrayElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleArrayElement(FSBZVehicleArrayElement::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleArrayElement"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleArrayElement
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleArrayElement()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleArrayElement>(FName(TEXT("SBZVehicleArrayElement")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleArrayElement;
	struct Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Vehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleArrayElement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleArrayElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Vehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleArrayElement" },
		{ "ModuleRelativePath", "Public/SBZVehicleArrayElement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleArrayElement, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Vehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Vehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleArrayElement" },
		{ "ModuleRelativePath", "Public/SBZVehicleArrayElement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleArrayElement, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleArrayElement",
		sizeof(FSBZVehicleArrayElement),
		alignof(FSBZVehicleArrayElement),
		Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleArrayElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleArrayElement"), sizeof(FSBZVehicleArrayElement), Get_Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleArrayElement_Hash() { return 2794959607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
