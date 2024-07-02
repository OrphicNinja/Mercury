// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHackingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHackingState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackingState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHackingState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHackingState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackingState>()
	{
		return ESBZHackingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHackingState(ESBZHackingState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHackingState_Hash() { return 3460010789U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHackingState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHackingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHackingState::NotHacked", (int64)ESBZHackingState::NotHacked },
				{ "ESBZHackingState::Hacked", (int64)ESBZHackingState::Hacked },
				{ "ESBZHackingState::Overloaded", (int64)ESBZHackingState::Overloaded },
				{ "ESBZHackingState::Disabled", (int64)ESBZHackingState::Disabled },
				{ "ESBZHackingState::Destroyed", (int64)ESBZHackingState::Destroyed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Destroyed.Name", "ESBZHackingState::Destroyed" },
				{ "Disabled.Name", "ESBZHackingState::Disabled" },
				{ "Hacked.Name", "ESBZHackingState::Hacked" },
				{ "ModuleRelativePath", "Public/ESBZHackingState.h" },
				{ "NotHacked.Name", "ESBZHackingState::NotHacked" },
				{ "Overloaded.Name", "ESBZHackingState::Overloaded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHackingState",
				"ESBZHackingState",
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
