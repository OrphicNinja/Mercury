// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZReturnToIISReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZReturnToIISReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZReturnToIISReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZReturnToIISReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZReturnToIISReason>()
	{
		return ESBZReturnToIISReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZReturnToIISReason(ESBZReturnToIISReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZReturnToIISReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason_Hash() { return 2911805944U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZReturnToIISReason"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZReturnToIISReason::NoError", (int64)ESBZReturnToIISReason::NoError },
				{ "ESBZReturnToIISReason::ReturnFromSuspension", (int64)ESBZReturnToIISReason::ReturnFromSuspension },
				{ "ESBZReturnToIISReason::LoggedOut", (int64)ESBZReturnToIISReason::LoggedOut },
				{ "ESBZReturnToIISReason::SwitchedUser", (int64)ESBZReturnToIISReason::SwitchedUser },
				{ "ESBZReturnToIISReason::LostConnectionToTheInternet", (int64)ESBZReturnToIISReason::LostConnectionToTheInternet },
				{ "ESBZReturnToIISReason::InvalidLoadout", (int64)ESBZReturnToIISReason::InvalidLoadout },
				{ "ESBZReturnToIISReason::LoggedOutAmbiguously", (int64)ESBZReturnToIISReason::LoggedOutAmbiguously },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InvalidLoadout.Name", "ESBZReturnToIISReason::InvalidLoadout" },
				{ "LoggedOut.Name", "ESBZReturnToIISReason::LoggedOut" },
				{ "LoggedOutAmbiguously.Name", "ESBZReturnToIISReason::LoggedOutAmbiguously" },
				{ "LostConnectionToTheInternet.Name", "ESBZReturnToIISReason::LostConnectionToTheInternet" },
				{ "ModuleRelativePath", "Public/ESBZReturnToIISReason.h" },
				{ "NoError.Name", "ESBZReturnToIISReason::NoError" },
				{ "ReturnFromSuspension.Name", "ESBZReturnToIISReason::ReturnFromSuspension" },
				{ "SwitchedUser.Name", "ESBZReturnToIISReason::SwitchedUser" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZReturnToIISReason",
				"ESBZReturnToIISReason",
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
