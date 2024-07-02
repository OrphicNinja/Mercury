// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAISoundSurfaceTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAISoundSurfaceTypes() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAISoundSurfaceTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAISoundSurfaceTypes"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAISoundSurfaceTypes>()
	{
		return ESBZAISoundSurfaceTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAISoundSurfaceTypes(ESBZAISoundSurfaceTypes_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAISoundSurfaceTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes_Hash() { return 1418327029U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAISoundSurfaceTypes"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAISoundSurfaceTypes::Dampened", (int64)ESBZAISoundSurfaceTypes::Dampened },
				{ "ESBZAISoundSurfaceTypes::Hard", (int64)ESBZAISoundSurfaceTypes::Hard },
				{ "ESBZAISoundSurfaceTypes::Loud", (int64)ESBZAISoundSurfaceTypes::Loud },
				{ "ESBZAISoundSurfaceTypes::Trap", (int64)ESBZAISoundSurfaceTypes::Trap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dampened.Name", "ESBZAISoundSurfaceTypes::Dampened" },
				{ "Hard.Name", "ESBZAISoundSurfaceTypes::Hard" },
				{ "Loud.Name", "ESBZAISoundSurfaceTypes::Loud" },
				{ "ModuleRelativePath", "Public/ESBZAISoundSurfaceTypes.h" },
				{ "Trap.Name", "ESBZAISoundSurfaceTypes::Trap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAISoundSurfaceTypes",
				"ESBZAISoundSurfaceTypes",
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
