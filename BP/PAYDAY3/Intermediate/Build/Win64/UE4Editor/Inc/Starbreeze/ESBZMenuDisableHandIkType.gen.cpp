// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMenuDisableHandIkType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMenuDisableHandIkType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMenuDisableHandIkType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMenuDisableHandIkType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMenuDisableHandIkType>()
	{
		return ESBZMenuDisableHandIkType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMenuDisableHandIkType(ESBZMenuDisableHandIkType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMenuDisableHandIkType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType_Hash() { return 1904755667U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMenuDisableHandIkType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMenuDisableHandIkType::Left", (int64)ESBZMenuDisableHandIkType::Left },
				{ "ESBZMenuDisableHandIkType::Right", (int64)ESBZMenuDisableHandIkType::Right },
				{ "ESBZMenuDisableHandIkType::Both", (int64)ESBZMenuDisableHandIkType::Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Both.Name", "ESBZMenuDisableHandIkType::Both" },
				{ "Left.Name", "ESBZMenuDisableHandIkType::Left" },
				{ "ModuleRelativePath", "Public/ESBZMenuDisableHandIkType.h" },
				{ "Right.Name", "ESBZMenuDisableHandIkType::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMenuDisableHandIkType",
				"ESBZMenuDisableHandIkType",
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
