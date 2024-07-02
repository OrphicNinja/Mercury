// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAIWeakPointType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAIWeakPointType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAIWeakPointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAIWeakPointType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIWeakPointType>()
	{
		return ESBZAIWeakPointType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAIWeakPointType(ESBZAIWeakPointType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAIWeakPointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType_Hash() { return 64546875U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAIWeakPointType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAIWeakPointType::None", (int64)ESBZAIWeakPointType::None },
				{ "ESBZAIWeakPointType::DozerFaceplate", (int64)ESBZAIWeakPointType::DozerFaceplate },
				{ "ESBZAIWeakPointType::ShieldVisor", (int64)ESBZAIWeakPointType::ShieldVisor },
				{ "ESBZAIWeakPointType::GrenadeBelt", (int64)ESBZAIWeakPointType::GrenadeBelt },
				{ "ESBZAIWeakPointType::TaserBattery", (int64)ESBZAIWeakPointType::TaserBattery },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DozerFaceplate.Name", "ESBZAIWeakPointType::DozerFaceplate" },
				{ "GrenadeBelt.Name", "ESBZAIWeakPointType::GrenadeBelt" },
				{ "ModuleRelativePath", "Public/ESBZAIWeakPointType.h" },
				{ "None.Name", "ESBZAIWeakPointType::None" },
				{ "ShieldVisor.Name", "ESBZAIWeakPointType::ShieldVisor" },
				{ "TaserBattery.Name", "ESBZAIWeakPointType::TaserBattery" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAIWeakPointType",
				"ESBZAIWeakPointType",
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
