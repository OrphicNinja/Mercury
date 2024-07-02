// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnRotationHandlingMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnRotationHandlingMethod() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnRotationMethod();
// End Cross Module References
class UScriptStruct* FSBZSpawnRotationHandlingMethod::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnRotationHandlingMethod"), sizeof(FSBZSpawnRotationHandlingMethod), Get_Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnRotationHandlingMethod>()
{
	return FSBZSpawnRotationHandlingMethod::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnRotationHandlingMethod(FSBZSpawnRotationHandlingMethod::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnRotationHandlingMethod"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnRotationHandlingMethod
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnRotationHandlingMethod()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnRotationHandlingMethod>(FName(TEXT("SBZSpawnRotationHandlingMethod")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnRotationHandlingMethod;
	struct Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAngleVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumAngleVariation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadingAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadingAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnRotationHandlingMethod.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnRotationHandlingMethod>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_MaximumAngleVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRotationHandlingMethod" },
		{ "ModuleRelativePath", "Public/SBZSpawnRotationHandlingMethod.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_MaximumAngleVariation = { "MaximumAngleVariation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRotationHandlingMethod, MaximumAngleVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_MaximumAngleVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_MaximumAngleVariation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRotationHandlingMethod" },
		{ "ModuleRelativePath", "Public/SBZSpawnRotationHandlingMethod.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRotationHandlingMethod, Method), Z_Construct_UEnum_Starbreeze_ESBZSpawnRotationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_HeadingAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRotationHandlingMethod" },
		{ "ModuleRelativePath", "Public/SBZSpawnRotationHandlingMethod.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_HeadingAngle = { "HeadingAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRotationHandlingMethod, HeadingAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_HeadingAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_HeadingAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_MaximumAngleVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::NewProp_HeadingAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnRotationHandlingMethod",
		sizeof(FSBZSpawnRotationHandlingMethod),
		alignof(FSBZSpawnRotationHandlingMethod),
		Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnRotationHandlingMethod"), sizeof(FSBZSpawnRotationHandlingMethod), Get_Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod_Hash() { return 4211221037U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
