// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAntiAliasingMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAntiAliasingMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAntiAliasingMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAntiAliasingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAntiAliasingMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAntiAliasingMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAntiAliasingMode>()
	{
		return ESBZAntiAliasingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAntiAliasingMode(ESBZAntiAliasingMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAntiAliasingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAntiAliasingMode_Hash() { return 1065805445U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAntiAliasingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAntiAliasingMode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAntiAliasingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAntiAliasingMode::Off", (int64)ESBZAntiAliasingMode::Off },
				{ "ESBZAntiAliasingMode::FXAA", (int64)ESBZAntiAliasingMode::FXAA },
				{ "ESBZAntiAliasingMode::Performance", (int64)ESBZAntiAliasingMode::Performance },
				{ "ESBZAntiAliasingMode::Quality", (int64)ESBZAntiAliasingMode::Quality },
				{ "ESBZAntiAliasingMode::DLAA", (int64)ESBZAntiAliasingMode::DLAA },
				{ "ESBZAntiAliasingMode::XeSS", (int64)ESBZAntiAliasingMode::XeSS },
				{ "ESBZAntiAliasingMode::Invalid", (int64)ESBZAntiAliasingMode::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DLAA.Name", "ESBZAntiAliasingMode::DLAA" },
				{ "FXAA.Name", "ESBZAntiAliasingMode::FXAA" },
				{ "Invalid.Name", "ESBZAntiAliasingMode::Invalid" },
				{ "ModuleRelativePath", "Public/ESBZAntiAliasingMode.h" },
				{ "Off.Name", "ESBZAntiAliasingMode::Off" },
				{ "Performance.Name", "ESBZAntiAliasingMode::Performance" },
				{ "Quality.Name", "ESBZAntiAliasingMode::Quality" },
				{ "XeSS.Name", "ESBZAntiAliasingMode::XeSS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAntiAliasingMode",
				"ESBZAntiAliasingMode",
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
