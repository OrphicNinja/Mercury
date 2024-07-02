// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPlayerInteractableMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPlayerInteractableMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerInteractableMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPlayerInteractableMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPlayerInteractableMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPlayerInteractableMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlayerInteractableMode>()
	{
		return ESBZPlayerInteractableMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPlayerInteractableMode(ESBZPlayerInteractableMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPlayerInteractableMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPlayerInteractableMode_Hash() { return 1230345963U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerInteractableMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPlayerInteractableMode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPlayerInteractableMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPlayerInteractableMode::Revive", (int64)ESBZPlayerInteractableMode::Revive },
				{ "ESBZPlayerInteractableMode::Uncuff", (int64)ESBZPlayerInteractableMode::Uncuff },
				{ "ESBZPlayerInteractableMode::Disengage", (int64)ESBZPlayerInteractableMode::Disengage },
				{ "ESBZPlayerInteractableMode::MAX", (int64)ESBZPlayerInteractableMode::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disengage.Name", "ESBZPlayerInteractableMode::Disengage" },
				{ "MAX.Name", "ESBZPlayerInteractableMode::MAX" },
				{ "ModuleRelativePath", "Public/ESBZPlayerInteractableMode.h" },
				{ "Revive.Name", "ESBZPlayerInteractableMode::Revive" },
				{ "Uncuff.Name", "ESBZPlayerInteractableMode::Uncuff" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPlayerInteractableMode",
				"ESBZPlayerInteractableMode",
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
