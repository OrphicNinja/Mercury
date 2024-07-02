// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHumanShieldInstigatorState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHumanShieldInstigatorState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHumanShieldInstigatorState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHumanShieldInstigatorState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHumanShieldInstigatorState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHumanShieldInstigatorState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHumanShieldInstigatorState>()
	{
		return ESBZHumanShieldInstigatorState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHumanShieldInstigatorState(ESBZHumanShieldInstigatorState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHumanShieldInstigatorState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHumanShieldInstigatorState_Hash() { return 3062165549U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHumanShieldInstigatorState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHumanShieldInstigatorState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHumanShieldInstigatorState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHumanShieldInstigatorState::None", (int64)ESBZHumanShieldInstigatorState::None },
				{ "ESBZHumanShieldInstigatorState::ReachingSlot", (int64)ESBZHumanShieldInstigatorState::ReachingSlot },
				{ "ESBZHumanShieldInstigatorState::EnterGrabbing", (int64)ESBZHumanShieldInstigatorState::EnterGrabbing },
				{ "ESBZHumanShieldInstigatorState::Grabbing", (int64)ESBZHumanShieldInstigatorState::Grabbing },
				{ "ESBZHumanShieldInstigatorState::Choking", (int64)ESBZHumanShieldInstigatorState::Choking },
				{ "ESBZHumanShieldInstigatorState::Exiting", (int64)ESBZHumanShieldInstigatorState::Exiting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Choking.Name", "ESBZHumanShieldInstigatorState::Choking" },
				{ "EnterGrabbing.Name", "ESBZHumanShieldInstigatorState::EnterGrabbing" },
				{ "Exiting.Name", "ESBZHumanShieldInstigatorState::Exiting" },
				{ "Grabbing.Name", "ESBZHumanShieldInstigatorState::Grabbing" },
				{ "ModuleRelativePath", "Public/ESBZHumanShieldInstigatorState.h" },
				{ "None.Name", "ESBZHumanShieldInstigatorState::None" },
				{ "ReachingSlot.Name", "ESBZHumanShieldInstigatorState::ReachingSlot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHumanShieldInstigatorState",
				"ESBZHumanShieldInstigatorState",
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
