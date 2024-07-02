// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/MultipleUsersStatRequests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipleUsersStatRequests() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FMultipleUsersStatRequests();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleUserStatRequests();
// End Cross Module References
class UScriptStruct* FMultipleUsersStatRequests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultipleUsersStatRequests, Z_Construct_UPackage__Script_Starbreeze(), TEXT("MultipleUsersStatRequests"), sizeof(FMultipleUsersStatRequests), Get_Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FMultipleUsersStatRequests>()
{
	return FMultipleUsersStatRequests::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultipleUsersStatRequests(FMultipleUsersStatRequests::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("MultipleUsersStatRequests"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFMultipleUsersStatRequests
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFMultipleUsersStatRequests()
	{
		UScriptStruct::DeferCppStructOps<FMultipleUsersStatRequests>(FName(TEXT("MultipleUsersStatRequests")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFMultipleUsersStatRequests;
	struct Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UsersStatRequests_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UsersStatRequests_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsersStatRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UsersStatRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultipleUsersStatRequests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultipleUsersStatRequests>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_ValueProp = { "UsersStatRequests", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSingleUserStatRequests, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_Key_KeyProp = { "UsersStatRequests_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultipleUsersStatRequests" },
		{ "ModuleRelativePath", "Public/MultipleUsersStatRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests = { "UsersStatRequests", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultipleUsersStatRequests, UsersStatRequests), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::NewProp_UsersStatRequests,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"MultipleUsersStatRequests",
		sizeof(FMultipleUsersStatRequests),
		alignof(FMultipleUsersStatRequests),
		Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultipleUsersStatRequests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultipleUsersStatRequests"), sizeof(FMultipleUsersStatRequests), Get_Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultipleUsersStatRequests_Hash() { return 3071967929U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
