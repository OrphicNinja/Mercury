// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutProtectAgainstSabotageObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutProtectAgainstSabotageObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagePoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutProtectAgainstSabotageObjective::execOnTagEventActiveChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bIsTagActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTagEventActiveChanged(Z_Param_Out_Tag,Z_Param_bIsTagActive);
		P_NATIVE_END;
	}
	void USBZHoldOutProtectAgainstSabotageObjective::StaticRegisterNativesUSBZHoldOutProtectAgainstSabotageObjective()
	{
		UClass* Class = USBZHoldOutProtectAgainstSabotageObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTagEventActiveChanged", &USBZHoldOutProtectAgainstSabotageObjective::execOnTagEventActiveChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics
	{
		struct SBZHoldOutProtectAgainstSabotageObjective_eventOnTagEventActiveChanged_Parms
		{
			FGameplayTag Tag;
			bool bIsTagActive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_bIsTagActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTagActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutProtectAgainstSabotageObjective_eventOnTagEventActiveChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_bIsTagActive_SetBit(void* Obj)
	{
		((SBZHoldOutProtectAgainstSabotageObjective_eventOnTagEventActiveChanged_Parms*)Obj)->bIsTagActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_bIsTagActive = { "bIsTagActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutProtectAgainstSabotageObjective_eventOnTagEventActiveChanged_Parms), &Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_bIsTagActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::NewProp_bIsTagActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective, nullptr, "OnTagEventActiveChanged", nullptr, nullptr, sizeof(SBZHoldOutProtectAgainstSabotageObjective_eventOnTagEventActiveChanged_Parms), Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_NoRegister()
	{
		return USBZHoldOutProtectAgainstSabotageObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SabotagePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagEventProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagEventProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotageTagEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SabotageTagEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSabotageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamagePerSabotageEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHoldOutObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutProtectAgainstSabotageObjective_OnTagEventActiveChanged, "OnTagEventActiveChanged" }, // 462225633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutProtectAgainstSabotageObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutProtectAgainstSabotageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutProtectAgainstSabotageObjective, Health), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints_Inner = { "SabotagePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutProtectAgainstSabotageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints = { "SabotagePoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutProtectAgainstSabotageObjective, SabotagePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_TagEventProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutProtectAgainstSabotageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_TagEventProvider = { "TagEventProvider", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutProtectAgainstSabotageObjective, TagEventProvider), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_TagEventProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_TagEventProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotageTagEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutProtectAgainstSabotageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotageTagEvents = { "SabotageTagEvents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutProtectAgainstSabotageObjective, SabotageTagEvents), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotageTagEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotageTagEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_DamagePerSabotageEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutProtectAgainstSabotageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutProtectAgainstSabotageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_DamagePerSabotageEvent = { "DamagePerSabotageEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutProtectAgainstSabotageObjective, DamagePerSabotageEvent), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_DamagePerSabotageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_DamagePerSabotageEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotagePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_TagEventProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_SabotageTagEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::NewProp_DamagePerSabotageEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutProtectAgainstSabotageObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::ClassParams = {
		&USBZHoldOutProtectAgainstSabotageObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutProtectAgainstSabotageObjective, 637122228);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutProtectAgainstSabotageObjective>()
	{
		return USBZHoldOutProtectAgainstSabotageObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutProtectAgainstSabotageObjective(Z_Construct_UClass_USBZHoldOutProtectAgainstSabotageObjective, &USBZHoldOutProtectAgainstSabotageObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutProtectAgainstSabotageObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutProtectAgainstSabotageObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
