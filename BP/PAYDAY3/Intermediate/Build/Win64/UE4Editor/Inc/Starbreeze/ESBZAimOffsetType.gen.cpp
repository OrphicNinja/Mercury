// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAimOffsetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAimOffsetType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAimOffsetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAimOffsetType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAimOffsetType>()
	{
		return ESBZAimOffsetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAimOffsetType(ESBZAimOffsetType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAimOffsetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType_Hash() { return 706520137U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAimOffsetType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAimOffsetType::Head", (int64)ESBZAimOffsetType::Head },
				{ "ESBZAimOffsetType::UpperBody", (int64)ESBZAimOffsetType::UpperBody },
				{ "ESBZAimOffsetType::UpperBodyCrouched", (int64)ESBZAimOffsetType::UpperBodyCrouched },
				{ "ESBZAimOffsetType::Custom", (int64)ESBZAimOffsetType::Custom },
				{ "ESBZAimOffsetType::None", (int64)ESBZAimOffsetType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "ESBZAimOffsetType::Custom" },
				{ "Head.Name", "ESBZAimOffsetType::Head" },
				{ "ModuleRelativePath", "Public/ESBZAimOffsetType.h" },
				{ "None.Name", "ESBZAimOffsetType::None" },
				{ "UpperBody.Name", "ESBZAimOffsetType::UpperBody" },
				{ "UpperBodyCrouched.Name", "ESBZAimOffsetType::UpperBodyCrouched" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAimOffsetType",
				"ESBZAimOffsetType",
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
