// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRequestFeedbackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRequestFeedbackType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRequestFeedbackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRequestFeedbackType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRequestFeedbackType>()
	{
		return ESBZRequestFeedbackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRequestFeedbackType(ESBZRequestFeedbackType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRequestFeedbackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType_Hash() { return 3621768769U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRequestFeedbackType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRequestFeedbackType::FriendRequest", (int64)ESBZRequestFeedbackType::FriendRequest },
				{ "ESBZRequestFeedbackType::RemoveFriendRequest", (int64)ESBZRequestFeedbackType::RemoveFriendRequest },
				{ "ESBZRequestFeedbackType::CancelFriendRequest", (int64)ESBZRequestFeedbackType::CancelFriendRequest },
				{ "ESBZRequestFeedbackType::AcceptFriendRequest", (int64)ESBZRequestFeedbackType::AcceptFriendRequest },
				{ "ESBZRequestFeedbackType::RejectFriendRequest", (int64)ESBZRequestFeedbackType::RejectFriendRequest },
				{ "ESBZRequestFeedbackType::BlockPlayerRequest", (int64)ESBZRequestFeedbackType::BlockPlayerRequest },
				{ "ESBZRequestFeedbackType::UnblockPlayerRequest", (int64)ESBZRequestFeedbackType::UnblockPlayerRequest },
				{ "ESBZRequestFeedbackType::ReportPlayerRequest", (int64)ESBZRequestFeedbackType::ReportPlayerRequest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcceptFriendRequest.Name", "ESBZRequestFeedbackType::AcceptFriendRequest" },
				{ "BlockPlayerRequest.Name", "ESBZRequestFeedbackType::BlockPlayerRequest" },
				{ "BlueprintType", "true" },
				{ "CancelFriendRequest.Name", "ESBZRequestFeedbackType::CancelFriendRequest" },
				{ "FriendRequest.Name", "ESBZRequestFeedbackType::FriendRequest" },
				{ "ModuleRelativePath", "Public/ESBZRequestFeedbackType.h" },
				{ "RejectFriendRequest.Name", "ESBZRequestFeedbackType::RejectFriendRequest" },
				{ "RemoveFriendRequest.Name", "ESBZRequestFeedbackType::RemoveFriendRequest" },
				{ "ReportPlayerRequest.Name", "ESBZRequestFeedbackType::ReportPlayerRequest" },
				{ "UnblockPlayerRequest.Name", "ESBZRequestFeedbackType::UnblockPlayerRequest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRequestFeedbackType",
				"ESBZRequestFeedbackType",
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
