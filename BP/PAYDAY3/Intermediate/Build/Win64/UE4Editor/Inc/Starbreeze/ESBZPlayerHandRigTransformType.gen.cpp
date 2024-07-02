// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPlayerHandRigTransformType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPlayerHandRigTransformType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerHandRigTransformType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPlayerHandRigTransformType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPlayerHandRigTransformType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPlayerHandRigTransformType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlayerHandRigTransformType>()
	{
		return ESBZPlayerHandRigTransformType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPlayerHandRigTransformType(ESBZPlayerHandRigTransformType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPlayerHandRigTransformType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPlayerHandRigTransformType_Hash() { return 771563736U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerHandRigTransformType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPlayerHandRigTransformType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPlayerHandRigTransformType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPlayerHandRigTransformType::None", (int64)ESBZPlayerHandRigTransformType::None },
				{ "ESBZPlayerHandRigTransformType::Default", (int64)ESBZPlayerHandRigTransformType::Default },
				{ "ESBZPlayerHandRigTransformType::Crouched", (int64)ESBZPlayerHandRigTransformType::Crouched },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Crouched.Name", "ESBZPlayerHandRigTransformType::Crouched" },
				{ "Default.Name", "ESBZPlayerHandRigTransformType::Default" },
				{ "ModuleRelativePath", "Public/ESBZPlayerHandRigTransformType.h" },
				{ "None.Name", "ESBZPlayerHandRigTransformType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPlayerHandRigTransformType",
				"ESBZPlayerHandRigTransformType",
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
