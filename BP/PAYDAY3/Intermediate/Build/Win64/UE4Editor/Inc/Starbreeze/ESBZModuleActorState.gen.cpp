// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZModuleActorState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZModuleActorState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZModuleActorState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZModuleActorState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZModuleActorState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZModuleActorState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZModuleActorState>()
	{
		return ESBZModuleActorState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZModuleActorState(ESBZModuleActorState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZModuleActorState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZModuleActorState_Hash() { return 3956704893U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZModuleActorState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZModuleActorState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZModuleActorState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZModuleActorState::None", (int64)ESBZModuleActorState::None },
				{ "ESBZModuleActorState::Failed", (int64)ESBZModuleActorState::Failed },
				{ "ESBZModuleActorState::Disabled", (int64)ESBZModuleActorState::Disabled },
				{ "ESBZModuleActorState::Interacted", (int64)ESBZModuleActorState::Interacted },
				{ "ESBZModuleActorState::Cut", (int64)ESBZModuleActorState::Cut },
				{ "ESBZModuleActorState::Hacked", (int64)ESBZModuleActorState::Hacked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cut.Name", "ESBZModuleActorState::Cut" },
				{ "Disabled.Name", "ESBZModuleActorState::Disabled" },
				{ "Failed.Name", "ESBZModuleActorState::Failed" },
				{ "Hacked.Name", "ESBZModuleActorState::Hacked" },
				{ "Interacted.Name", "ESBZModuleActorState::Interacted" },
				{ "ModuleRelativePath", "Public/ESBZModuleActorState.h" },
				{ "None.Name", "ESBZModuleActorState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZModuleActorState",
				"ESBZModuleActorState",
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
