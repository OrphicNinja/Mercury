// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTranslucentTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTranslucentTimer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTranslucentTimer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
class UScriptStruct* FSBZTranslucentTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTranslucentTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTranslucentTimer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTranslucentTimer"), sizeof(FSBZTranslucentTimer), Get_Z_Construct_UScriptStruct_FSBZTranslucentTimer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTranslucentTimer>()
{
	return FSBZTranslucentTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTranslucentTimer(FSBZTranslucentTimer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTranslucentTimer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTranslucentTimer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTranslucentTimer()
	{
		UScriptStruct::DeferCppStructOps<FSBZTranslucentTimer>(FName(TEXT("SBZTranslucentTimer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTranslucentTimer;
	struct Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTranslucentTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTranslucentTimer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTranslucentTimer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTranslucentTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTranslucentTimer, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_PrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTranslucentTimer" },
		{ "ModuleRelativePath", "Public/SBZTranslucentTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTranslucentTimer, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_TimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_PrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::NewProp_TimerHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTranslucentTimer",
		sizeof(FSBZTranslucentTimer),
		alignof(FSBZTranslucentTimer),
		Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTranslucentTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTranslucentTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTranslucentTimer"), sizeof(FSBZTranslucentTimer), Get_Z_Construct_UScriptStruct_FSBZTranslucentTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTranslucentTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTranslucentTimer_Hash() { return 3300209221U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
