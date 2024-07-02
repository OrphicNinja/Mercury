// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAnimationAxisDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAnimationAxisDirection() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimationAxisDirection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAnimationAxisDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAnimationAxisDirection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAnimationAxisDirection"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAnimationAxisDirection>()
	{
		return ESBZAnimationAxisDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAnimationAxisDirection(ESBZAnimationAxisDirection_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAnimationAxisDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAnimationAxisDirection_Hash() { return 2336571789U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimationAxisDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAnimationAxisDirection"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAnimationAxisDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAnimationAxisDirection::Forward", (int64)ESBZAnimationAxisDirection::Forward },
				{ "ESBZAnimationAxisDirection::ForwardLeft45", (int64)ESBZAnimationAxisDirection::ForwardLeft45 },
				{ "ESBZAnimationAxisDirection::ForwardRight45", (int64)ESBZAnimationAxisDirection::ForwardRight45 },
				{ "ESBZAnimationAxisDirection::Backward", (int64)ESBZAnimationAxisDirection::Backward },
				{ "ESBZAnimationAxisDirection::BackwardLeft45", (int64)ESBZAnimationAxisDirection::BackwardLeft45 },
				{ "ESBZAnimationAxisDirection::BackwardRight45", (int64)ESBZAnimationAxisDirection::BackwardRight45 },
				{ "ESBZAnimationAxisDirection::Left", (int64)ESBZAnimationAxisDirection::Left },
				{ "ESBZAnimationAxisDirection::Right", (int64)ESBZAnimationAxisDirection::Right },
				{ "ESBZAnimationAxisDirection::Up", (int64)ESBZAnimationAxisDirection::Up },
				{ "ESBZAnimationAxisDirection::Down", (int64)ESBZAnimationAxisDirection::Down },
				{ "ESBZAnimationAxisDirection::Custom", (int64)ESBZAnimationAxisDirection::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backward.Name", "ESBZAnimationAxisDirection::Backward" },
				{ "BackwardLeft45.Name", "ESBZAnimationAxisDirection::BackwardLeft45" },
				{ "BackwardRight45.Name", "ESBZAnimationAxisDirection::BackwardRight45" },
				{ "BlueprintType", "true" },
				{ "Custom.Name", "ESBZAnimationAxisDirection::Custom" },
				{ "Down.Name", "ESBZAnimationAxisDirection::Down" },
				{ "Forward.Name", "ESBZAnimationAxisDirection::Forward" },
				{ "ForwardLeft45.Name", "ESBZAnimationAxisDirection::ForwardLeft45" },
				{ "ForwardRight45.Name", "ESBZAnimationAxisDirection::ForwardRight45" },
				{ "Left.Name", "ESBZAnimationAxisDirection::Left" },
				{ "ModuleRelativePath", "Public/ESBZAnimationAxisDirection.h" },
				{ "Right.Name", "ESBZAnimationAxisDirection::Right" },
				{ "Up.Name", "ESBZAnimationAxisDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAnimationAxisDirection",
				"ESBZAnimationAxisDirection",
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
