// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3AmmoState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3AmmoState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3AmmoState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3AmmoState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3AmmoState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3AmmoState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3AmmoState>()
	{
		return EPD3AmmoState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3AmmoState(EPD3AmmoState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3AmmoState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3AmmoState_Hash() { return 1033348431U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3AmmoState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3AmmoState"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3AmmoState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3AmmoState::Normal", (int64)EPD3AmmoState::Normal },
				{ "EPD3AmmoState::Low", (int64)EPD3AmmoState::Low },
				{ "EPD3AmmoState::Critical", (int64)EPD3AmmoState::Critical },
				{ "EPD3AmmoState::Default", (int64)EPD3AmmoState::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Critical.Name", "EPD3AmmoState::Critical" },
				{ "Default.Name", "EPD3AmmoState::Default" },
				{ "Low.Name", "EPD3AmmoState::Low" },
				{ "ModuleRelativePath", "Public/EPD3AmmoState.h" },
				{ "Normal.Name", "EPD3AmmoState::Normal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3AmmoState",
				"EPD3AmmoState",
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
