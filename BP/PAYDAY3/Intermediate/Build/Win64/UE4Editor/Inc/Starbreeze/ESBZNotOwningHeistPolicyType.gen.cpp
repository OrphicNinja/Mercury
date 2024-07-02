// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZNotOwningHeistPolicyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZNotOwningHeistPolicyType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZNotOwningHeistPolicyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZNotOwningHeistPolicyType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZNotOwningHeistPolicyType>()
	{
		return ESBZNotOwningHeistPolicyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZNotOwningHeistPolicyType(ESBZNotOwningHeistPolicyType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZNotOwningHeistPolicyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType_Hash() { return 4284412896U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZNotOwningHeistPolicyType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZNotOwningHeistPolicyType::NoAction", (int64)ESBZNotOwningHeistPolicyType::NoAction },
				{ "ESBZNotOwningHeistPolicyType::Ban", (int64)ESBZNotOwningHeistPolicyType::Ban },
				{ "ESBZNotOwningHeistPolicyType::ReturnToMainMenu", (int64)ESBZNotOwningHeistPolicyType::ReturnToMainMenu },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ban.Name", "ESBZNotOwningHeistPolicyType::Ban" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZNotOwningHeistPolicyType.h" },
				{ "NoAction.Name", "ESBZNotOwningHeistPolicyType::NoAction" },
				{ "ReturnToMainMenu.Name", "ESBZNotOwningHeistPolicyType::ReturnToMainMenu" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZNotOwningHeistPolicyType",
				"ESBZNotOwningHeistPolicyType",
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
