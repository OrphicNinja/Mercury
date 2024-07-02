// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableLocalizedAnimatedInteractionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableLocalizedAnimatedInteractionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZInteractableLocalizedAnimatedInteractionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractableLocalizedAnimatedInteractionData"), sizeof(FSBZInteractableLocalizedAnimatedInteractionData), Get_Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractableLocalizedAnimatedInteractionData>()
{
	return FSBZInteractableLocalizedAnimatedInteractionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData(FSBZInteractableLocalizedAnimatedInteractionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractableLocalizedAnimatedInteractionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableLocalizedAnimatedInteractionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableLocalizedAnimatedInteractionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractableLocalizedAnimatedInteractionData>(FName(TEXT("SBZInteractableLocalizedAnimatedInteractionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableLocalizedAnimatedInteractionData;
	struct Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedInteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimatedInteractionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableLocalizedAnimatedInteractionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractableLocalizedAnimatedInteractionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableLocalizedAnimatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZInteractableLocalizedAnimatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableLocalizedAnimatedInteractionData, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_AnimatedInteractionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableLocalizedAnimatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZInteractableLocalizedAnimatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_AnimatedInteractionData = { "AnimatedInteractionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableLocalizedAnimatedInteractionData, AnimatedInteractionData), Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_AnimatedInteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_AnimatedInteractionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::NewProp_AnimatedInteractionData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractableLocalizedAnimatedInteractionData",
		sizeof(FSBZInteractableLocalizedAnimatedInteractionData),
		alignof(FSBZInteractableLocalizedAnimatedInteractionData),
		Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractableLocalizedAnimatedInteractionData"), sizeof(FSBZInteractableLocalizedAnimatedInteractionData), Get_Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData_Hash() { return 3194726610U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
