// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAnimationScalePlayRateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAnimationScalePlayRateType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAnimationScalePlayRateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAnimationScalePlayRateType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAnimationScalePlayRateType>()
	{
		return ESBZAnimationScalePlayRateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAnimationScalePlayRateType(ESBZAnimationScalePlayRateType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAnimationScalePlayRateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType_Hash() { return 927072956U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAnimationScalePlayRateType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAnimationScalePlayRateType::Native", (int64)ESBZAnimationScalePlayRateType::Native },
				{ "ESBZAnimationScalePlayRateType::UpAndDown", (int64)ESBZAnimationScalePlayRateType::UpAndDown },
				{ "ESBZAnimationScalePlayRateType::OnlyUp", (int64)ESBZAnimationScalePlayRateType::OnlyUp },
				{ "ESBZAnimationScalePlayRateType::OnlyDown", (int64)ESBZAnimationScalePlayRateType::OnlyDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZAnimationScalePlayRateType.h" },
				{ "Native.Name", "ESBZAnimationScalePlayRateType::Native" },
				{ "OnlyDown.Name", "ESBZAnimationScalePlayRateType::OnlyDown" },
				{ "OnlyUp.Name", "ESBZAnimationScalePlayRateType::OnlyUp" },
				{ "UpAndDown.Name", "ESBZAnimationScalePlayRateType::UpAndDown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAnimationScalePlayRateType",
				"ESBZAnimationScalePlayRateType",
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
