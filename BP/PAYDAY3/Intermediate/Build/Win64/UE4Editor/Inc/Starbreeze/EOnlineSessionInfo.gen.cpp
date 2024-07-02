// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EOnlineSessionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlineSessionInfo() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EOnlineSessionInfo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EOnlineSessionInfo"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EOnlineSessionInfo>()
	{
		return EOnlineSessionInfo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineSessionInfo(EOnlineSessionInfo_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EOnlineSessionInfo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo_Hash() { return 3936505644U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineSessionInfo"), 0, Get_Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineSessionInfo::Initial", (int64)EOnlineSessionInfo::Initial },
				{ "EOnlineSessionInfo::Terminating", (int64)EOnlineSessionInfo::Terminating },
				{ "EOnlineSessionInfo::Terminated", (int64)EOnlineSessionInfo::Terminated },
				{ "EOnlineSessionInfo::Interrupt", (int64)EOnlineSessionInfo::Interrupt },
				{ "EOnlineSessionInfo::Searching", (int64)EOnlineSessionInfo::Searching },
				{ "EOnlineSessionInfo::SearchCompleted", (int64)EOnlineSessionInfo::SearchCompleted },
				{ "EOnlineSessionInfo::ReservedSlot", (int64)EOnlineSessionInfo::ReservedSlot },
				{ "EOnlineSessionInfo::NoSlots", (int64)EOnlineSessionInfo::NoSlots },
				{ "EOnlineSessionInfo::Joining", (int64)EOnlineSessionInfo::Joining },
				{ "EOnlineSessionInfo::Joined", (int64)EOnlineSessionInfo::Joined },
				{ "EOnlineSessionInfo::Hosting", (int64)EOnlineSessionInfo::Hosting },
				{ "EOnlineSessionInfo::Host", (int64)EOnlineSessionInfo::Host },
				{ "EOnlineSessionInfo::Updating", (int64)EOnlineSessionInfo::Updating },
				{ "EOnlineSessionInfo::CheckingPrivileges", (int64)EOnlineSessionInfo::CheckingPrivileges },
				{ "EOnlineSessionInfo::CannotPlayOnline", (int64)EOnlineSessionInfo::CannotPlayOnline },
				{ "EOnlineSessionInfo::SmartMatching", (int64)EOnlineSessionInfo::SmartMatching },
				{ "EOnlineSessionInfo::TimedOut", (int64)EOnlineSessionInfo::TimedOut },
				{ "EOnlineSessionInfo::Error", (int64)EOnlineSessionInfo::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CannotPlayOnline.Name", "EOnlineSessionInfo::CannotPlayOnline" },
				{ "CheckingPrivileges.Name", "EOnlineSessionInfo::CheckingPrivileges" },
				{ "Error.Name", "EOnlineSessionInfo::Error" },
				{ "Host.Name", "EOnlineSessionInfo::Host" },
				{ "Hosting.Name", "EOnlineSessionInfo::Hosting" },
				{ "Initial.Name", "EOnlineSessionInfo::Initial" },
				{ "Interrupt.Name", "EOnlineSessionInfo::Interrupt" },
				{ "Joined.Name", "EOnlineSessionInfo::Joined" },
				{ "Joining.Name", "EOnlineSessionInfo::Joining" },
				{ "ModuleRelativePath", "Public/EOnlineSessionInfo.h" },
				{ "NoSlots.Name", "EOnlineSessionInfo::NoSlots" },
				{ "ReservedSlot.Name", "EOnlineSessionInfo::ReservedSlot" },
				{ "SearchCompleted.Name", "EOnlineSessionInfo::SearchCompleted" },
				{ "Searching.Name", "EOnlineSessionInfo::Searching" },
				{ "SmartMatching.Name", "EOnlineSessionInfo::SmartMatching" },
				{ "Terminated.Name", "EOnlineSessionInfo::Terminated" },
				{ "Terminating.Name", "EOnlineSessionInfo::Terminating" },
				{ "TimedOut.Name", "EOnlineSessionInfo::TimedOut" },
				{ "Updating.Name", "EOnlineSessionInfo::Updating" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EOnlineSessionInfo",
				"EOnlineSessionInfo",
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
