// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EAIObjectiveInteractionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIObjectiveInteractionTypes() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EAIObjectiveInteractionTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EAIObjectiveInteractionTypes"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EAIObjectiveInteractionTypes>()
	{
		return EAIObjectiveInteractionTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIObjectiveInteractionTypes(EAIObjectiveInteractionTypes_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EAIObjectiveInteractionTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes_Hash() { return 3484434338U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIObjectiveInteractionTypes"), 0, Get_Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIObjectiveInteractionTypes::DirectInteraction", (int64)EAIObjectiveInteractionTypes::DirectInteraction },
				{ "EAIObjectiveInteractionTypes::CutGlassInteraction", (int64)EAIObjectiveInteractionTypes::CutGlassInteraction },
				{ "EAIObjectiveInteractionTypes::ThrowInteraction", (int64)EAIObjectiveInteractionTypes::ThrowInteraction },
				{ "EAIObjectiveInteractionTypes::MoveToAndWait", (int64)EAIObjectiveInteractionTypes::MoveToAndWait },
				{ "EAIObjectiveInteractionTypes::MAX", (int64)EAIObjectiveInteractionTypes::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CutGlassInteraction.Name", "EAIObjectiveInteractionTypes::CutGlassInteraction" },
				{ "DirectInteraction.Name", "EAIObjectiveInteractionTypes::DirectInteraction" },
				{ "MAX.Name", "EAIObjectiveInteractionTypes::MAX" },
				{ "ModuleRelativePath", "Public/EAIObjectiveInteractionTypes.h" },
				{ "MoveToAndWait.Name", "EAIObjectiveInteractionTypes::MoveToAndWait" },
				{ "ThrowInteraction.Name", "EAIObjectiveInteractionTypes::ThrowInteraction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EAIObjectiveInteractionTypes",
				"EAIObjectiveInteractionTypes",
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
