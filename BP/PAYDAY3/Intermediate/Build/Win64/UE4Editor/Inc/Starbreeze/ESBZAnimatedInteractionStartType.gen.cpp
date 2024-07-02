// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAnimatedInteractionStartType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAnimatedInteractionStartType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAnimatedInteractionStartType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAnimatedInteractionStartType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAnimatedInteractionStartType>()
	{
		return ESBZAnimatedInteractionStartType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAnimatedInteractionStartType(ESBZAnimatedInteractionStartType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAnimatedInteractionStartType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType_Hash() { return 2006879498U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAnimatedInteractionStartType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAnimatedInteractionStartType::OnStart", (int64)ESBZAnimatedInteractionStartType::OnStart },
				{ "ESBZAnimatedInteractionStartType::OnCompleted", (int64)ESBZAnimatedInteractionStartType::OnCompleted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZAnimatedInteractionStartType.h" },
				{ "OnCompleted.Name", "ESBZAnimatedInteractionStartType::OnCompleted" },
				{ "OnStart.Name", "ESBZAnimatedInteractionStartType::OnStart" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAnimatedInteractionStartType",
				"ESBZAnimatedInteractionStartType",
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
