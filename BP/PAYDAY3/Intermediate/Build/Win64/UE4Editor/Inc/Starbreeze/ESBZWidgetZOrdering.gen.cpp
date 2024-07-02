// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZWidgetZOrdering.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZWidgetZOrdering() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZWidgetZOrdering_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZWidgetZOrdering"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZWidgetZOrdering>()
	{
		return ESBZWidgetZOrdering_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZWidgetZOrdering(ESBZWidgetZOrdering_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZWidgetZOrdering"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering_Hash() { return 408156361U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZWidgetZOrdering"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZWidgetZOrdering::DefaultBackground", (int64)ESBZWidgetZOrdering::DefaultBackground },
				{ "ESBZWidgetZOrdering::Default", (int64)ESBZWidgetZOrdering::Default },
				{ "ESBZWidgetZOrdering::DefaultForeGround", (int64)ESBZWidgetZOrdering::DefaultForeGround },
				{ "ESBZWidgetZOrdering::OverlayBackground", (int64)ESBZWidgetZOrdering::OverlayBackground },
				{ "ESBZWidgetZOrdering::Overlay", (int64)ESBZWidgetZOrdering::Overlay },
				{ "ESBZWidgetZOrdering::OverlayForeGround", (int64)ESBZWidgetZOrdering::OverlayForeGround },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZWidgetZOrdering::Default" },
				{ "DefaultBackground.Name", "ESBZWidgetZOrdering::DefaultBackground" },
				{ "DefaultForeGround.Name", "ESBZWidgetZOrdering::DefaultForeGround" },
				{ "ModuleRelativePath", "Public/ESBZWidgetZOrdering.h" },
				{ "Overlay.Name", "ESBZWidgetZOrdering::Overlay" },
				{ "OverlayBackground.Name", "ESBZWidgetZOrdering::OverlayBackground" },
				{ "OverlayForeGround.Name", "ESBZWidgetZOrdering::OverlayForeGround" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZWidgetZOrdering",
				"ESBZWidgetZOrdering",
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
