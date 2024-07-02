// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZThrowableState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZThrowableState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZThrowableState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZThrowableState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZThrowableState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZThrowableState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZThrowableState>()
	{
		return ESBZThrowableState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZThrowableState(ESBZThrowableState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZThrowableState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZThrowableState_Hash() { return 1538105975U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZThrowableState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZThrowableState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZThrowableState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZThrowableState::None", (int64)ESBZThrowableState::None },
				{ "ESBZThrowableState::Spawned", (int64)ESBZThrowableState::Spawned },
				{ "ESBZThrowableState::Ready", (int64)ESBZThrowableState::Ready },
				{ "ESBZThrowableState::AttachedForThrow", (int64)ESBZThrowableState::AttachedForThrow },
				{ "ESBZThrowableState::ThrownStillAttached", (int64)ESBZThrowableState::ThrownStillAttached },
				{ "ESBZThrowableState::DetachedForThrow", (int64)ESBZThrowableState::DetachedForThrow },
				{ "ESBZThrowableState::Thrown", (int64)ESBZThrowableState::Thrown },
				{ "ESBZThrowableState::Canceled", (int64)ESBZThrowableState::Canceled },
				{ "ESBZThrowableState::Dropped", (int64)ESBZThrowableState::Dropped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttachedForThrow.Name", "ESBZThrowableState::AttachedForThrow" },
				{ "BlueprintType", "true" },
				{ "Canceled.Name", "ESBZThrowableState::Canceled" },
				{ "DetachedForThrow.Name", "ESBZThrowableState::DetachedForThrow" },
				{ "Dropped.Name", "ESBZThrowableState::Dropped" },
				{ "ModuleRelativePath", "Public/ESBZThrowableState.h" },
				{ "None.Name", "ESBZThrowableState::None" },
				{ "Ready.Name", "ESBZThrowableState::Ready" },
				{ "Spawned.Name", "ESBZThrowableState::Spawned" },
				{ "Thrown.Name", "ESBZThrowableState::Thrown" },
				{ "ThrownStillAttached.Name", "ESBZThrowableState::ThrownStillAttached" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZThrowableState",
				"ESBZThrowableState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
