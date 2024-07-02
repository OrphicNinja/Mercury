// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZObjectiveGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZObjectiveGroup() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZObjectiveGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZObjectiveGroup"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZObjectiveGroup>()
	{
		return ESBZObjectiveGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZObjectiveGroup(ESBZObjectiveGroup_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZObjectiveGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup_Hash() { return 242289382U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZObjectiveGroup"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZObjectiveGroup::None", (int64)ESBZObjectiveGroup::None },
				{ "ESBZObjectiveGroup::MainObjective", (int64)ESBZObjectiveGroup::MainObjective },
				{ "ESBZObjectiveGroup::OtherObjective0", (int64)ESBZObjectiveGroup::OtherObjective0 },
				{ "ESBZObjectiveGroup::OtherObjective1", (int64)ESBZObjectiveGroup::OtherObjective1 },
				{ "ESBZObjectiveGroup::OtherObjective2", (int64)ESBZObjectiveGroup::OtherObjective2 },
				{ "ESBZObjectiveGroup::OtherObjective3", (int64)ESBZObjectiveGroup::OtherObjective3 },
				{ "ESBZObjectiveGroup::OtherObjective4", (int64)ESBZObjectiveGroup::OtherObjective4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MainObjective.Name", "ESBZObjectiveGroup::MainObjective" },
				{ "ModuleRelativePath", "Public/ESBZObjectiveGroup.h" },
				{ "None.Name", "ESBZObjectiveGroup::None" },
				{ "OtherObjective0.Name", "ESBZObjectiveGroup::OtherObjective0" },
				{ "OtherObjective1.Name", "ESBZObjectiveGroup::OtherObjective1" },
				{ "OtherObjective2.Name", "ESBZObjectiveGroup::OtherObjective2" },
				{ "OtherObjective3.Name", "ESBZObjectiveGroup::OtherObjective3" },
				{ "OtherObjective4.Name", "ESBZObjectiveGroup::OtherObjective4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZObjectiveGroup",
				"ESBZObjectiveGroup",
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
