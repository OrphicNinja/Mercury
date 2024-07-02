// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDamageEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDamageEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZDamageEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZDamageEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZDamageEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDamageEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDamageEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDamageEvent"), sizeof(FSBZDamageEvent), Get_Z_Construct_UScriptStruct_FSBZDamageEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDamageEvent>()
{
	return FSBZDamageEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDamageEvent(FSBZDamageEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDamageEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDamageEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDamageEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZDamageEvent>(FName(TEXT("SBZDamageEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDamageEvent;
	struct Z_Construct_UScriptStruct_FSBZDamageEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attacker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Victim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Victim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCritical_MetaData[];
#endif
		static void NewProp_bCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCritical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasArmorBroken_MetaData[];
#endif
		static void NewProp_bWasArmorBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasArmorBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsKillshot_MetaData[];
#endif
		static void NewProp_bIsKillshot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsKillshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrequent_MetaData[];
#endif
		static void NewProp_bIsFrequent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrequent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTypeTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDamageEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Attacker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Attacker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Causer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Causer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Causer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Victim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, Victim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Victim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Victim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableData = { "EquippableData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, EquippableData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ThrowableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ThrowableData = { "ThrowableData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, ThrowableData), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ThrowableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ThrowableData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ArmorDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ArmorDamage = { "ArmorDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, ArmorDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ArmorDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ArmorDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_HealthDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_HealthDamage = { "HealthDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, HealthDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_HealthDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_HealthDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_OverHealDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_OverHealDamage = { "OverHealDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, OverHealDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_OverHealDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_OverHealDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical_SetBit(void* Obj)
	{
		((FSBZDamageEvent*)Obj)->bCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical = { "bCritical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDamageEvent), &Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken_SetBit(void* Obj)
	{
		((FSBZDamageEvent*)Obj)->bWasArmorBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken = { "bWasArmorBroken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDamageEvent), &Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot_SetBit(void* Obj)
	{
		((FSBZDamageEvent*)Obj)->bIsKillshot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot = { "bIsKillshot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDamageEvent), &Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent_SetBit(void* Obj)
	{
		((FSBZDamageEvent*)Obj)->bIsFrequent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent = { "bIsFrequent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDamageEvent), &Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Origin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_DamageTypeTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_DamageTypeTagContainer = { "DamageTypeTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, DamageTypeTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_DamageTypeTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_DamageTypeTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageEvent" },
		{ "ModuleRelativePath", "Public/SBZDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageEvent, EquippableIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Attacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Victim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ThrowableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_ArmorDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_HealthDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_OverHealDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bWasArmorBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsKillshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_bIsFrequent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_DamageTypeTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::NewProp_EquippableIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZDamageEvent",
		sizeof(FSBZDamageEvent),
		alignof(FSBZDamageEvent),
		Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDamageEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDamageEvent"), sizeof(FSBZDamageEvent), Get_Z_Construct_UScriptStruct_FSBZDamageEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDamageEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDamageEvent_Hash() { return 388339398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
