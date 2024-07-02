// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZBlockPlayerPawnContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZBlockPlayerPawnContext() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBlockPlayerPawnContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZBlockPlayerPawnContext_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZBlockPlayerPawnContext, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZBlockPlayerPawnContext"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZBlockPlayerPawnContext>()
	{
		return ESBZBlockPlayerPawnContext_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZBlockPlayerPawnContext(ESBZBlockPlayerPawnContext_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZBlockPlayerPawnContext"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZBlockPlayerPawnContext_Hash() { return 248649909U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZBlockPlayerPawnContext()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZBlockPlayerPawnContext"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZBlockPlayerPawnContext_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZBlockPlayerPawnContext::Init", (int64)ESBZBlockPlayerPawnContext::Init },
				{ "ESBZBlockPlayerPawnContext::Carried", (int64)ESBZBlockPlayerPawnContext::Carried },
				{ "ESBZBlockPlayerPawnContext::Death", (int64)ESBZBlockPlayerPawnContext::Death },
				{ "ESBZBlockPlayerPawnContext::WrongDeathPrediction", (int64)ESBZBlockPlayerPawnContext::WrongDeathPrediction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Carried.Name", "ESBZBlockPlayerPawnContext::Carried" },
				{ "Death.Name", "ESBZBlockPlayerPawnContext::Death" },
				{ "Init.Name", "ESBZBlockPlayerPawnContext::Init" },
				{ "ModuleRelativePath", "Public/ESBZBlockPlayerPawnContext.h" },
				{ "WrongDeathPrediction.Name", "ESBZBlockPlayerPawnContext::WrongDeathPrediction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZBlockPlayerPawnContext",
				"ESBZBlockPlayerPawnContext",
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
