// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZStoreItemPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZStoreItemPlatform() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZStoreItemPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZStoreItemPlatform"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZStoreItemPlatform>()
	{
		return ESBZStoreItemPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZStoreItemPlatform(ESBZStoreItemPlatform_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZStoreItemPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform_Hash() { return 1899364387U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZStoreItemPlatform"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZStoreItemPlatform::All", (int64)ESBZStoreItemPlatform::All },
				{ "ESBZStoreItemPlatform::Steam", (int64)ESBZStoreItemPlatform::Steam },
				{ "ESBZStoreItemPlatform::XBox", (int64)ESBZStoreItemPlatform::XBox },
				{ "ESBZStoreItemPlatform::PlayStation", (int64)ESBZStoreItemPlatform::PlayStation },
				{ "ESBZStoreItemPlatform::Epic", (int64)ESBZStoreItemPlatform::Epic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESBZStoreItemPlatform::All" },
				{ "BlueprintType", "true" },
				{ "Epic.Name", "ESBZStoreItemPlatform::Epic" },
				{ "ModuleRelativePath", "Public/ESBZStoreItemPlatform.h" },
				{ "PlayStation.Name", "ESBZStoreItemPlatform::PlayStation" },
				{ "Steam.Name", "ESBZStoreItemPlatform::Steam" },
				{ "XBox.Name", "ESBZStoreItemPlatform::XBox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZStoreItemPlatform",
				"ESBZStoreItemPlatform",
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
