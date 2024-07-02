// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCheaterPolicyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCheaterPolicyType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCheaterPolicyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCheaterPolicyType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCheaterPolicyType>()
	{
		return ESBZCheaterPolicyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCheaterPolicyType(ESBZCheaterPolicyType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCheaterPolicyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType_Hash() { return 3028238561U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCheaterPolicyType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCheaterPolicyType::NoAction", (int64)ESBZCheaterPolicyType::NoAction },
				{ "ESBZCheaterPolicyType::Ban", (int64)ESBZCheaterPolicyType::Ban },
				{ "ESBZCheaterPolicyType::DefaultItems", (int64)ESBZCheaterPolicyType::DefaultItems },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ban.Name", "ESBZCheaterPolicyType::Ban" },
				{ "BlueprintType", "true" },
				{ "DefaultItems.Name", "ESBZCheaterPolicyType::DefaultItems" },
				{ "ModuleRelativePath", "Public/ESBZCheaterPolicyType.h" },
				{ "NoAction.Name", "ESBZCheaterPolicyType::NoAction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCheaterPolicyType",
				"ESBZCheaterPolicyType",
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
