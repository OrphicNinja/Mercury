// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomPath() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRoomPath();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZRoomPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRoomPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRoomPath, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRoomPath"), sizeof(FSBZRoomPath), Get_Z_Construct_UScriptStruct_FSBZRoomPath_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRoomPath>()
{
	return FSBZRoomPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRoomPath(FSBZRoomPath::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRoomPath"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRoomPath
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRoomPath()
	{
		UScriptStruct::DeferCppStructOps<FSBZRoomPath>(FName(TEXT("SBZRoomPath")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRoomPath;
	struct Z_Construct_UScriptStruct_FSBZRoomPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Connectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Connectors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomPath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRoomPath>();
	}
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors_Inner = { "Connectors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPath" },
		{ "ModuleRelativePath", "Public/SBZRoomPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors = { "Connectors", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRoomPath, Connectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPath" },
		{ "ModuleRelativePath", "Public/SBZRoomPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRoomPath, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRoomPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Connectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPath_Statics::NewProp_Rooms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRoomPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRoomPath",
		sizeof(FSBZRoomPath),
		alignof(FSBZRoomPath),
		Z_Construct_UScriptStruct_FSBZRoomPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRoomPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRoomPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRoomPath"), sizeof(FSBZRoomPath), Get_Z_Construct_UScriptStruct_FSBZRoomPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRoomPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRoomPath_Hash() { return 4189467577U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
