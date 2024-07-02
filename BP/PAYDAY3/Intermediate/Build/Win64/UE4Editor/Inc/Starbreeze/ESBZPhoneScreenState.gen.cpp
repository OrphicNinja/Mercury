// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPhoneScreenState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPhoneScreenState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPhoneScreenState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPhoneScreenState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPhoneScreenState>()
	{
		return ESBZPhoneScreenState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPhoneScreenState(ESBZPhoneScreenState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPhoneScreenState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState_Hash() { return 1149024516U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPhoneScreenState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPhoneScreenState::Activate", (int64)ESBZPhoneScreenState::Activate },
				{ "ESBZPhoneScreenState::Waiting", (int64)ESBZPhoneScreenState::Waiting },
				{ "ESBZPhoneScreenState::Complete", (int64)ESBZPhoneScreenState::Complete },
				{ "ESBZPhoneScreenState::Fail", (int64)ESBZPhoneScreenState::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Activate.Name", "ESBZPhoneScreenState::Activate" },
				{ "BlueprintType", "true" },
				{ "Complete.Name", "ESBZPhoneScreenState::Complete" },
				{ "Fail.Name", "ESBZPhoneScreenState::Fail" },
				{ "ModuleRelativePath", "Public/ESBZPhoneScreenState.h" },
				{ "Waiting.Name", "ESBZPhoneScreenState::Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPhoneScreenState",
				"ESBZPhoneScreenState",
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
