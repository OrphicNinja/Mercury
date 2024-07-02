// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAgilityPointType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAgilityPointType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAgilityPointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAgilityPointType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAgilityPointType>()
	{
		return ESBZAgilityPointType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAgilityPointType(ESBZAgilityPointType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAgilityPointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType_Hash() { return 1163944245U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAgilityPointType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAgilityPointType::FloorStart", (int64)ESBZAgilityPointType::FloorStart },
				{ "ESBZAgilityPointType::FloorEnd", (int64)ESBZAgilityPointType::FloorEnd },
				{ "ESBZAgilityPointType::Wall", (int64)ESBZAgilityPointType::Wall },
				{ "ESBZAgilityPointType::FrontEdgeTop", (int64)ESBZAgilityPointType::FrontEdgeTop },
				{ "ESBZAgilityPointType::BackEdgeTop", (int64)ESBZAgilityPointType::BackEdgeTop },
				{ "ESBZAgilityPointType::FrontEdgeBottom", (int64)ESBZAgilityPointType::FrontEdgeBottom },
				{ "ESBZAgilityPointType::BackEdgeBottom", (int64)ESBZAgilityPointType::BackEdgeBottom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackEdgeBottom.Name", "ESBZAgilityPointType::BackEdgeBottom" },
				{ "BackEdgeTop.Name", "ESBZAgilityPointType::BackEdgeTop" },
				{ "BlueprintType", "true" },
				{ "FloorEnd.Name", "ESBZAgilityPointType::FloorEnd" },
				{ "FloorStart.Name", "ESBZAgilityPointType::FloorStart" },
				{ "FrontEdgeBottom.Name", "ESBZAgilityPointType::FrontEdgeBottom" },
				{ "FrontEdgeTop.Name", "ESBZAgilityPointType::FrontEdgeTop" },
				{ "ModuleRelativePath", "Public/ESBZAgilityPointType.h" },
				{ "Wall.Name", "ESBZAgilityPointType::Wall" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAgilityPointType",
				"ESBZAgilityPointType",
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
