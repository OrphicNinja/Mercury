// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZModularMeshSpawnStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZModularMeshSpawnStep() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZModularMeshSpawnStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZModularMeshSpawnStep"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZModularMeshSpawnStep>()
	{
		return ESBZModularMeshSpawnStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZModularMeshSpawnStep(ESBZModularMeshSpawnStep_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZModularMeshSpawnStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep_Hash() { return 805736892U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZModularMeshSpawnStep"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZModularMeshSpawnStep::Default", (int64)ESBZModularMeshSpawnStep::Default },
				{ "ESBZModularMeshSpawnStep::Mount", (int64)ESBZModularMeshSpawnStep::Mount },
				{ "ESBZModularMeshSpawnStep::Adapter", (int64)ESBZModularMeshSpawnStep::Adapter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Adapter.Name", "ESBZModularMeshSpawnStep::Adapter" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZModularMeshSpawnStep::Default" },
				{ "ModuleRelativePath", "Public/ESBZModularMeshSpawnStep.h" },
				{ "Mount.Name", "ESBZModularMeshSpawnStep::Mount" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZModularMeshSpawnStep",
				"ESBZModularMeshSpawnStep",
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
