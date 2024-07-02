// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAICrewCharacterInteractableMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAICrewCharacterInteractableMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAICrewCharacterInteractableMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAICrewCharacterInteractableMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAICrewCharacterInteractableMode>()
	{
		return ESBZAICrewCharacterInteractableMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAICrewCharacterInteractableMode(ESBZAICrewCharacterInteractableMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAICrewCharacterInteractableMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode_Hash() { return 861562587U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAICrewCharacterInteractableMode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAICrewCharacterInteractableMode::PickUp", (int64)ESBZAICrewCharacterInteractableMode::PickUp },
				{ "ESBZAICrewCharacterInteractableMode::Revive", (int64)ESBZAICrewCharacterInteractableMode::Revive },
				{ "ESBZAICrewCharacterInteractableMode::Uncuff", (int64)ESBZAICrewCharacterInteractableMode::Uncuff },
				{ "ESBZAICrewCharacterInteractableMode::None", (int64)ESBZAICrewCharacterInteractableMode::None },
				{ "ESBZAICrewCharacterInteractableMode::MAX", (int64)ESBZAICrewCharacterInteractableMode::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ESBZAICrewCharacterInteractableMode::MAX" },
				{ "ModuleRelativePath", "Public/ESBZAICrewCharacterInteractableMode.h" },
				{ "None.Name", "ESBZAICrewCharacterInteractableMode::None" },
				{ "PickUp.Name", "ESBZAICrewCharacterInteractableMode::PickUp" },
				{ "Revive.Name", "ESBZAICrewCharacterInteractableMode::Revive" },
				{ "Uncuff.Name", "ESBZAICrewCharacterInteractableMode::Uncuff" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAICrewCharacterInteractableMode",
				"ESBZAICrewCharacterInteractableMode",
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
