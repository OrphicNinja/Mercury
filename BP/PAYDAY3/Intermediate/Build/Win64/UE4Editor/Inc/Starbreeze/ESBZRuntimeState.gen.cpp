// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRuntimeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRuntimeState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRuntimeState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRuntimeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRuntimeState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRuntimeState>()
	{
		return ESBZRuntimeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRuntimeState(ESBZRuntimeState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRuntimeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRuntimeState_Hash() { return 3655899400U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRuntimeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRuntimeState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRuntimeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRuntimeState::None", (int64)ESBZRuntimeState::None },
				{ "ESBZRuntimeState::HackerAced", (int64)ESBZRuntimeState::HackerAced },
				{ "ESBZRuntimeState::SecureLoop", (int64)ESBZRuntimeState::SecureLoop },
				{ "ESBZRuntimeState::RoutedPing", (int64)ESBZRuntimeState::RoutedPing },
				{ "ESBZRuntimeState::ScramblerBase", (int64)ESBZRuntimeState::ScramblerBase },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HackerAced.Name", "ESBZRuntimeState::HackerAced" },
				{ "ModuleRelativePath", "Public/ESBZRuntimeState.h" },
				{ "None.Name", "ESBZRuntimeState::None" },
				{ "RoutedPing.Name", "ESBZRuntimeState::RoutedPing" },
				{ "ScramblerBase.Name", "ESBZRuntimeState::ScramblerBase" },
				{ "SecureLoop.Name", "ESBZRuntimeState::SecureLoop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRuntimeState",
				"ESBZRuntimeState",
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
