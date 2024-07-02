// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRegistrationFieldInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRegistrationFieldInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZRegistrationFieldInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRegistrationFieldInfo"), sizeof(FSBZRegistrationFieldInfo), Get_Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRegistrationFieldInfo>()
{
	return FSBZRegistrationFieldInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRegistrationFieldInfo(FSBZRegistrationFieldInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRegistrationFieldInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRegistrationFieldInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRegistrationFieldInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZRegistrationFieldInfo>(FName(TEXT("SBZRegistrationFieldInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRegistrationFieldInfo;
	struct Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Displayname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Displayname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DOB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DOB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRegistrationFieldInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRegistrationFieldInfo" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRegistrationFieldInfo, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRegistrationFieldInfo" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRegistrationFieldInfo, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRegistrationFieldInfo" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRegistrationFieldInfo, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Displayname_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRegistrationFieldInfo" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Displayname = { "Displayname", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRegistrationFieldInfo, Displayname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Displayname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Displayname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Country_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRegistrationFieldInfo" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRegistrationFieldInfo, Country), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_DOB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRegistrationFieldInfo" },
		{ "ModuleRelativePath", "Public/SBZRegistrationFieldInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_DOB = { "DOB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRegistrationFieldInfo, DOB), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_DOB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_DOB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Displayname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::NewProp_DOB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRegistrationFieldInfo",
		sizeof(FSBZRegistrationFieldInfo),
		alignof(FSBZRegistrationFieldInfo),
		Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRegistrationFieldInfo"), sizeof(FSBZRegistrationFieldInfo), Get_Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo_Hash() { return 3604455362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
