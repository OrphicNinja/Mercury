// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStorymodeStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStorymodeStruct() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStorymodeStruct();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZStorymodeStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStorymodeStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStorymodeStruct, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStorymodeStruct"), sizeof(FSBZStorymodeStruct), Get_Z_Construct_UScriptStruct_FSBZStorymodeStruct_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStorymodeStruct>()
{
	return FSBZStorymodeStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStorymodeStruct(FSBZStorymodeStruct::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStorymodeStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStorymodeStruct
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStorymodeStruct()
	{
		UScriptStruct::DeferCppStructOps<FSBZStorymodeStruct>(FName(TEXT("SBZStorymodeStruct")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStorymodeStruct;
	struct Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DisplayIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ButtonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStorymodeStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStorymodeStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_VideoURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStorymodeStruct" },
		{ "ModuleRelativePath", "Public/SBZStorymodeStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_VideoURL = { "VideoURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStorymodeStruct, VideoURL), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_VideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_VideoURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_DisplayIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStorymodeStruct" },
		{ "ModuleRelativePath", "Public/SBZStorymodeStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_DisplayIcon = { "DisplayIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStorymodeStruct, DisplayIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_DisplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_DisplayIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_ButtonText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStorymodeStruct" },
		{ "ModuleRelativePath", "Public/SBZStorymodeStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStorymodeStruct, ButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_ButtonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_VideoURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_DisplayIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::NewProp_ButtonText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStorymodeStruct",
		sizeof(FSBZStorymodeStruct),
		alignof(FSBZStorymodeStruct),
		Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStorymodeStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStorymodeStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStorymodeStruct"), sizeof(FSBZStorymodeStruct), Get_Z_Construct_UScriptStruct_FSBZStorymodeStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStorymodeStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStorymodeStruct_Hash() { return 76701302U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
