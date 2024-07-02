// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPlayerReadyStatusValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerReadyStatusValue() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPlayerReadyStatusValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPlayerReadyStatusValue"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPlayerReadyStatusValue>()
	{
		return EPlayerReadyStatusValue_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerReadyStatusValue(EPlayerReadyStatusValue_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPlayerReadyStatusValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue_Hash() { return 216814727U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerReadyStatusValue"), 0, Get_Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerReadyStatusValue::Loading", (int64)EPlayerReadyStatusValue::Loading },
				{ "EPlayerReadyStatusValue::NotReady", (int64)EPlayerReadyStatusValue::NotReady },
				{ "EPlayerReadyStatusValue::Ready", (int64)EPlayerReadyStatusValue::Ready },
				{ "EPlayerReadyStatusValue::Transition", (int64)EPlayerReadyStatusValue::Transition },
				{ "EPlayerReadyStatusValue::InGame", (int64)EPlayerReadyStatusValue::InGame },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InGame.Name", "EPlayerReadyStatusValue::InGame" },
				{ "Loading.Name", "EPlayerReadyStatusValue::Loading" },
				{ "ModuleRelativePath", "Public/EPlayerReadyStatusValue.h" },
				{ "NotReady.Name", "EPlayerReadyStatusValue::NotReady" },
				{ "Ready.Name", "EPlayerReadyStatusValue::Ready" },
				{ "Transition.Name", "EPlayerReadyStatusValue::Transition" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPlayerReadyStatusValue",
				"EPlayerReadyStatusValue",
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
