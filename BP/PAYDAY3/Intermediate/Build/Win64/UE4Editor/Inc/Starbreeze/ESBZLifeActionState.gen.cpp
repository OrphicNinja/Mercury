// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZLifeActionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZLifeActionState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZLifeActionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZLifeActionState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZLifeActionState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZLifeActionState>()
	{
		return ESBZLifeActionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZLifeActionState(ESBZLifeActionState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZLifeActionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZLifeActionState_Hash() { return 1767233591U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZLifeActionState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZLifeActionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZLifeActionState::Stopped", (int64)ESBZLifeActionState::Stopped },
				{ "ESBZLifeActionState::Pending", (int64)ESBZLifeActionState::Pending },
				{ "ESBZLifeActionState::Entering", (int64)ESBZLifeActionState::Entering },
				{ "ESBZLifeActionState::Playing", (int64)ESBZLifeActionState::Playing },
				{ "ESBZLifeActionState::Exiting", (int64)ESBZLifeActionState::Exiting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Entering.Name", "ESBZLifeActionState::Entering" },
				{ "Exiting.Name", "ESBZLifeActionState::Exiting" },
				{ "ModuleRelativePath", "Public/ESBZLifeActionState.h" },
				{ "Pending.Name", "ESBZLifeActionState::Pending" },
				{ "Playing.Name", "ESBZLifeActionState::Playing" },
				{ "Stopped.Name", "ESBZLifeActionState::Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZLifeActionState",
				"ESBZLifeActionState",
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
