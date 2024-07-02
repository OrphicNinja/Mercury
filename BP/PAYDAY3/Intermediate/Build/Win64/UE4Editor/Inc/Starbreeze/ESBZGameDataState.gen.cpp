// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGameDataState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGameDataState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameDataState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGameDataState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGameDataState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGameDataState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGameDataState>()
	{
		return ESBZGameDataState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGameDataState(ESBZGameDataState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGameDataState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGameDataState_Hash() { return 347202447U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameDataState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGameDataState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGameDataState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZGameDataState::NotLoggedIn", (int64)ESBZGameDataState::NotLoggedIn },
				{ "ESBZGameDataState::NotLoaded", (int64)ESBZGameDataState::NotLoaded },
				{ "ESBZGameDataState::Loaded", (int64)ESBZGameDataState::Loaded },
				{ "ESBZGameDataState::ProgressNotLoaded", (int64)ESBZGameDataState::ProgressNotLoaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loaded.Name", "ESBZGameDataState::Loaded" },
				{ "ModuleRelativePath", "Public/ESBZGameDataState.h" },
				{ "NotLoaded.Name", "ESBZGameDataState::NotLoaded" },
				{ "NotLoggedIn.Name", "ESBZGameDataState::NotLoggedIn" },
				{ "ProgressNotLoaded.Name", "ESBZGameDataState::ProgressNotLoaded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGameDataState",
				"ESBZGameDataState",
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
