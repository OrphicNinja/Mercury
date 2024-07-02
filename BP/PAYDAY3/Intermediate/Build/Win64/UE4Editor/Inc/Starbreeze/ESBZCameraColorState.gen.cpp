// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCameraColorState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCameraColorState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraColorState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCameraColorState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCameraColorState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCameraColorState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCameraColorState>()
	{
		return ESBZCameraColorState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCameraColorState(ESBZCameraColorState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCameraColorState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCameraColorState_Hash() { return 2855614253U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraColorState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCameraColorState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCameraColorState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCameraColorState::None", (int64)ESBZCameraColorState::None },
				{ "ESBZCameraColorState::AIControlled", (int64)ESBZCameraColorState::AIControlled },
				{ "ESBZCameraColorState::Hacked", (int64)ESBZCameraColorState::Hacked },
				{ "ESBZCameraColorState::Friendly", (int64)ESBZCameraColorState::Friendly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIControlled.Name", "ESBZCameraColorState::AIControlled" },
				{ "BlueprintType", "true" },
				{ "Friendly.Name", "ESBZCameraColorState::Friendly" },
				{ "Hacked.Name", "ESBZCameraColorState::Hacked" },
				{ "ModuleRelativePath", "Public/ESBZCameraColorState.h" },
				{ "None.Name", "ESBZCameraColorState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCameraColorState",
				"ESBZCameraColorState",
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
