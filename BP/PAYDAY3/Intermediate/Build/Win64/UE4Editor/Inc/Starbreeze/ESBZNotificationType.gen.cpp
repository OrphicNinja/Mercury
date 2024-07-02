// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZNotificationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZNotificationType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotificationType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZNotificationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZNotificationType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZNotificationType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZNotificationType>()
	{
		return ESBZNotificationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZNotificationType(ESBZNotificationType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZNotificationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZNotificationType_Hash() { return 161194198U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotificationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZNotificationType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZNotificationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZNotificationType::NotificationError", (int64)ESBZNotificationType::NotificationError },
				{ "ESBZNotificationType::NotificationWarning", (int64)ESBZNotificationType::NotificationWarning },
				{ "ESBZNotificationType::NotificationNormal", (int64)ESBZNotificationType::NotificationNormal },
				{ "ESBZNotificationType::NotificationEmpty", (int64)ESBZNotificationType::NotificationEmpty },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZNotificationType.h" },
				{ "NotificationEmpty.Name", "ESBZNotificationType::NotificationEmpty" },
				{ "NotificationError.Name", "ESBZNotificationType::NotificationError" },
				{ "NotificationNormal.Name", "ESBZNotificationType::NotificationNormal" },
				{ "NotificationWarning.Name", "ESBZNotificationType::NotificationWarning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZNotificationType",
				"ESBZNotificationType",
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
