// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/Validation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValidation() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FValidation();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FValidationDescription();
// End Cross Module References
class UScriptStruct* FValidation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FValidation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidation, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("Validation"), sizeof(FValidation), Get_Z_Construct_UScriptStruct_FValidation_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FValidation>()
{
	return FValidation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FValidation(FValidation::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("Validation"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFValidation
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFValidation()
	{
		UScriptStruct::DeferCppStructOps<FValidation>(FName(TEXT("Validation")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFValidation;
	struct Z_Construct_UScriptStruct_FValidation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowDigit_MetaData[];
#endif
		static void NewProp_AllowDigit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowDigit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowLetter_MetaData[];
#endif
		static void NewProp_AllowLetter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowLetter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowSpace_MetaData[];
#endif
		static void NewProp_AllowSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowUnicode_MetaData[];
#endif
		static void NewProp_AllowUnicode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowUnicode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCustomRegex_MetaData[];
#endif
		static void NewProp_IsCustomRegex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCustomRegex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LetterCase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LetterCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRepeatingAlphaNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRepeatingAlphaNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRepeatingSpecialCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRepeatingSpecialCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCharType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinCharType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Regex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Regex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialCharacterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecialCharacterLocation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecialCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecialCharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FValidation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit_SetBit(void* Obj)
	{
		((FValidation*)Obj)->AllowDigit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit = { "AllowDigit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FValidation), &Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter_SetBit(void* Obj)
	{
		((FValidation*)Obj)->AllowLetter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter = { "AllowLetter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FValidation), &Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace_SetBit(void* Obj)
	{
		((FValidation*)Obj)->AllowSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace = { "AllowSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FValidation), &Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode_SetBit(void* Obj)
	{
		((FValidation*)Obj)->AllowUnicode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode = { "AllowUnicode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FValidation), &Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, Description), Z_Construct_UScriptStruct_FValidationDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex_SetBit(void* Obj)
	{
		((FValidation*)Obj)->IsCustomRegex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex = { "IsCustomRegex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FValidation), &Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_LetterCase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_LetterCase = { "LetterCase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, LetterCase), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_LetterCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_LetterCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, MaxLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingAlphaNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingAlphaNum = { "MaxRepeatingAlphaNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, MaxRepeatingAlphaNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingAlphaNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingAlphaNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingSpecialCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingSpecialCharacter = { "MaxRepeatingSpecialCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, MaxRepeatingSpecialCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingSpecialCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingSpecialCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinCharType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinCharType = { "MinCharType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, MinCharType), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinCharType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinCharType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinLength = { "MinLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, MinLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Regex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Regex = { "Regex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, Regex), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Regex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Regex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacterLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacterLocation = { "SpecialCharacterLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, SpecialCharacterLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacterLocation_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters_Inner = { "SpecialCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/Validation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters = { "SpecialCharacters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidation, SpecialCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowDigit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowLetter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_AllowUnicode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_IsCustomRegex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_LetterCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingAlphaNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MaxRepeatingSpecialCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinCharType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_MinLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_Regex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidation_Statics::NewProp_SpecialCharacters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"Validation",
		sizeof(FValidation),
		alignof(FValidation),
		Z_Construct_UScriptStruct_FValidation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValidation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValidation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FValidation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Validation"), sizeof(FValidation), Get_Z_Construct_UScriptStruct_FValidation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FValidation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FValidation_Hash() { return 4189140249U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
