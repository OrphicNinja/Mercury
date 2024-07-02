// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZBoneAnimConstraintType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZBoneAnimConstraintType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZBoneAnimConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZBoneAnimConstraintType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZBoneAnimConstraintType>()
	{
		return ESBZBoneAnimConstraintType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZBoneAnimConstraintType(ESBZBoneAnimConstraintType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZBoneAnimConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType_Hash() { return 3701383513U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZBoneAnimConstraintType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZBoneAnimConstraintType::Static", (int64)ESBZBoneAnimConstraintType::Static },
				{ "ESBZBoneAnimConstraintType::FollowsBone", (int64)ESBZBoneAnimConstraintType::FollowsBone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FollowsBone.Name", "ESBZBoneAnimConstraintType::FollowsBone" },
				{ "ModuleRelativePath", "Public/ESBZBoneAnimConstraintType.h" },
				{ "Static.Name", "ESBZBoneAnimConstraintType::Static" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZBoneAnimConstraintType",
				"ESBZBoneAnimConstraintType",
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
