// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChatCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChatCommand() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChatCommand();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZChatCommand>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSBZChatCommand cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSBZChatCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChatCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChatCommand, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChatCommand"), sizeof(FSBZChatCommand), Get_Z_Construct_UScriptStruct_FSBZChatCommand_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChatCommand>()
{
	return FSBZChatCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChatCommand(FSBZChatCommand::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChatCommand"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChatCommand
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChatCommand()
	{
		UScriptStruct::DeferCppStructOps<FSBZChatCommand>(FName(TEXT("SBZChatCommand")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChatCommand;
	struct Z_Construct_UScriptStruct_FSBZChatCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandAsString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CommandAsString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommandToExecute_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandToExecute_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CommandToExecute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChatCommand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChatCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandAsString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatCommand" },
		{ "ModuleRelativePath", "Public/SBZChatCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandAsString = { "CommandAsString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatCommand, CommandAsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandAsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandAsString_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatCommand" },
		{ "ModuleRelativePath", "Public/SBZChatCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute = { "CommandToExecute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatCommand, CommandToExecute), Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChatCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandAsString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatCommand_Statics::NewProp_CommandToExecute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChatCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SBZChatCommand",
		sizeof(FSBZChatCommand),
		alignof(FSBZChatCommand),
		Z_Construct_UScriptStruct_FSBZChatCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChatCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChatCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChatCommand"), sizeof(FSBZChatCommand), Get_Z_Construct_UScriptStruct_FSBZChatCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChatCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChatCommand_Hash() { return 80085055U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
