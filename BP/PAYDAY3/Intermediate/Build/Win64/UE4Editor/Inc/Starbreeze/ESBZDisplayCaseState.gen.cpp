// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDisplayCaseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDisplayCaseState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDisplayCaseState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDisplayCaseState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDisplayCaseState>()
	{
		return ESBZDisplayCaseState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDisplayCaseState(ESBZDisplayCaseState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDisplayCaseState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState_Hash() { return 361575794U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDisplayCaseState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZDisplayCaseState::None", (int64)ESBZDisplayCaseState::None },
				{ "ESBZDisplayCaseState::Closed", (int64)ESBZDisplayCaseState::Closed },
				{ "ESBZDisplayCaseState::Open", (int64)ESBZDisplayCaseState::Open },
				{ "ESBZDisplayCaseState::Cut", (int64)ESBZDisplayCaseState::Cut },
				{ "ESBZDisplayCaseState::Broken", (int64)ESBZDisplayCaseState::Broken },
				{ "ESBZDisplayCaseState::Lockdown", (int64)ESBZDisplayCaseState::Lockdown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Broken.Name", "ESBZDisplayCaseState::Broken" },
				{ "Closed.Name", "ESBZDisplayCaseState::Closed" },
				{ "Cut.Name", "ESBZDisplayCaseState::Cut" },
				{ "Lockdown.Name", "ESBZDisplayCaseState::Lockdown" },
				{ "ModuleRelativePath", "Public/ESBZDisplayCaseState.h" },
				{ "None.Name", "ESBZDisplayCaseState::None" },
				{ "Open.Name", "ESBZDisplayCaseState::Open" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDisplayCaseState",
				"ESBZDisplayCaseState",
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
