// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZUpscaler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZUpscaler() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUpscaler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZUpscaler_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZUpscaler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZUpscaler"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZUpscaler>()
	{
		return ESBZUpscaler_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZUpscaler(ESBZUpscaler_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZUpscaler"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZUpscaler_Hash() { return 2857050684U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZUpscaler()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZUpscaler"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZUpscaler_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZUpscaler::None", (int64)ESBZUpscaler::None },
				{ "ESBZUpscaler::Unreal", (int64)ESBZUpscaler::Unreal },
				{ "ESBZUpscaler::NIS", (int64)ESBZUpscaler::NIS },
				{ "ESBZUpscaler::DLSSSR", (int64)ESBZUpscaler::DLSSSR },
				{ "ESBZUpscaler::FSR2", (int64)ESBZUpscaler::FSR2 },
				{ "ESBZUpscaler::XeSS", (int64)ESBZUpscaler::XeSS },
				{ "ESBZUpscaler::MAX", (int64)ESBZUpscaler::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLSSSR.Name", "ESBZUpscaler::DLSSSR" },
				{ "FSR2.Name", "ESBZUpscaler::FSR2" },
				{ "MAX.Name", "ESBZUpscaler::MAX" },
				{ "ModuleRelativePath", "Public/ESBZUpscaler.h" },
				{ "NIS.Name", "ESBZUpscaler::NIS" },
				{ "None.Name", "ESBZUpscaler::None" },
				{ "Unreal.Name", "ESBZUpscaler::Unreal" },
				{ "XeSS.Name", "ESBZUpscaler::XeSS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZUpscaler",
				"ESBZUpscaler",
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
