// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EFriendStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFriendStatus() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EFriendStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EFriendStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EFriendStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EFriendStatus"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EFriendStatus>()
	{
		return EFriendStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendStatus(EFriendStatus_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EFriendStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EFriendStatus_Hash() { return 3319377692U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EFriendStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendStatus"), 0, Get_Z_Construct_UEnum_Starbreeze_EFriendStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendStatus::Offline", (int64)EFriendStatus::Offline },
				{ "EFriendStatus::Available", (int64)EFriendStatus::Available },
				{ "EFriendStatus::Away", (int64)EFriendStatus::Away },
				{ "EFriendStatus::Invisible", (int64)EFriendStatus::Invisible },
				{ "EFriendStatus::Unknown", (int64)EFriendStatus::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Available.Name", "EFriendStatus::Available" },
				{ "Away.Name", "EFriendStatus::Away" },
				{ "BlueprintType", "true" },
				{ "Invisible.Name", "EFriendStatus::Invisible" },
				{ "ModuleRelativePath", "Public/EFriendStatus.h" },
				{ "Offline.Name", "EFriendStatus::Offline" },
				{ "Unknown.Name", "EFriendStatus::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EFriendStatus",
				"EFriendStatus",
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
