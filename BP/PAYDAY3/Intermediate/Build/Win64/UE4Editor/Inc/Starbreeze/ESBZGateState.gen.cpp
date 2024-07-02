// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGateState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGateState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGateState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGateState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGateState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGateState>()
	{
		return ESBZGateState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGateState(ESBZGateState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGateState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGateState_Hash() { return 2214338416U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGateState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGateState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZGateState::OpenForward", (int64)ESBZGateState::OpenForward },
				{ "ESBZGateState::OpenBackward", (int64)ESBZGateState::OpenBackward },
				{ "ESBZGateState::SlammedClose", (int64)ESBZGateState::SlammedClose },
				{ "ESBZGateState::Closed", (int64)ESBZGateState::Closed },
				{ "ESBZGateState::Locked", (int64)ESBZGateState::Locked },
				{ "ESBZGateState::Sealed", (int64)ESBZGateState::Sealed },
				{ "ESBZGateState::Barricaded", (int64)ESBZGateState::Barricaded },
				{ "ESBZGateState::BreachedForward", (int64)ESBZGateState::BreachedForward },
				{ "ESBZGateState::BreachedBackward", (int64)ESBZGateState::BreachedBackward },
				{ "ESBZGateState::SlammedOpenForward", (int64)ESBZGateState::SlammedOpenForward },
				{ "ESBZGateState::SlammedOpenBackward", (int64)ESBZGateState::SlammedOpenBackward },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Barricaded.Name", "ESBZGateState::Barricaded" },
				{ "BlueprintType", "true" },
				{ "BreachedBackward.Name", "ESBZGateState::BreachedBackward" },
				{ "BreachedForward.Name", "ESBZGateState::BreachedForward" },
				{ "Closed.Name", "ESBZGateState::Closed" },
				{ "Locked.Name", "ESBZGateState::Locked" },
				{ "ModuleRelativePath", "Public/ESBZGateState.h" },
				{ "OpenBackward.Name", "ESBZGateState::OpenBackward" },
				{ "OpenForward.Name", "ESBZGateState::OpenForward" },
				{ "Sealed.Name", "ESBZGateState::Sealed" },
				{ "SlammedClose.Name", "ESBZGateState::SlammedClose" },
				{ "SlammedOpenBackward.Name", "ESBZGateState::SlammedOpenBackward" },
				{ "SlammedOpenForward.Name", "ESBZGateState::SlammedOpenForward" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGateState",
				"ESBZGateState",
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
