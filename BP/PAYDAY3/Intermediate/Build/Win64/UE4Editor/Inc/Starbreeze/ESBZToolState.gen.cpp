// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZToolState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZToolState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZToolState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZToolState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZToolState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZToolState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZToolState>()
	{
		return ESBZToolState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZToolState(ESBZToolState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZToolState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZToolState_Hash() { return 393069330U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZToolState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZToolState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZToolState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZToolState::Ready", (int64)ESBZToolState::Ready },
				{ "ESBZToolState::Activated", (int64)ESBZToolState::Activated },
				{ "ESBZToolState::ActivatedUsing", (int64)ESBZToolState::ActivatedUsing },
				{ "ESBZToolState::ActivatedIdle", (int64)ESBZToolState::ActivatedIdle },
				{ "ESBZToolState::Canceled", (int64)ESBZToolState::Canceled },
				{ "ESBZToolState::Destroyed", (int64)ESBZToolState::Destroyed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Activated.Name", "ESBZToolState::Activated" },
				{ "ActivatedIdle.Name", "ESBZToolState::ActivatedIdle" },
				{ "ActivatedUsing.Name", "ESBZToolState::ActivatedUsing" },
				{ "BlueprintType", "true" },
				{ "Canceled.Name", "ESBZToolState::Canceled" },
				{ "Destroyed.Name", "ESBZToolState::Destroyed" },
				{ "ModuleRelativePath", "Public/ESBZToolState.h" },
				{ "Ready.Name", "ESBZToolState::Ready" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZToolState",
				"ESBZToolState",
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
