// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZStageMiscDebugDataType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZStageMiscDebugDataType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZStageMiscDebugDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZStageMiscDebugDataType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZStageMiscDebugDataType>()
	{
		return ESBZStageMiscDebugDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZStageMiscDebugDataType(ESBZStageMiscDebugDataType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZStageMiscDebugDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType_Hash() { return 4173471959U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZStageMiscDebugDataType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZStageMiscDebugDataType::Name", (int64)ESBZStageMiscDebugDataType::Name },
				{ "ESBZStageMiscDebugDataType::String", (int64)ESBZStageMiscDebugDataType::String },
				{ "ESBZStageMiscDebugDataType::Bool", (int64)ESBZStageMiscDebugDataType::Bool },
				{ "ESBZStageMiscDebugDataType::Int32", (int64)ESBZStageMiscDebugDataType::Int32 },
				{ "ESBZStageMiscDebugDataType::Float", (int64)ESBZStageMiscDebugDataType::Float },
				{ "ESBZStageMiscDebugDataType::Transform", (int64)ESBZStageMiscDebugDataType::Transform },
				{ "ESBZStageMiscDebugDataType::Line", (int64)ESBZStageMiscDebugDataType::Line },
				{ "ESBZStageMiscDebugDataType::Vector", (int64)ESBZStageMiscDebugDataType::Vector },
				{ "ESBZStageMiscDebugDataType::Sphere", (int64)ESBZStageMiscDebugDataType::Sphere },
				{ "ESBZStageMiscDebugDataType::Capsule", (int64)ESBZStageMiscDebugDataType::Capsule },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.Name", "ESBZStageMiscDebugDataType::Bool" },
				{ "Capsule.Name", "ESBZStageMiscDebugDataType::Capsule" },
				{ "Float.Name", "ESBZStageMiscDebugDataType::Float" },
				{ "Int32.Name", "ESBZStageMiscDebugDataType::Int32" },
				{ "Line.Name", "ESBZStageMiscDebugDataType::Line" },
				{ "ModuleRelativePath", "Public/ESBZStageMiscDebugDataType.h" },
				{ "Name.Name", "ESBZStageMiscDebugDataType::Name" },
				{ "Sphere.Name", "ESBZStageMiscDebugDataType::Sphere" },
				{ "String.Name", "ESBZStageMiscDebugDataType::String" },
				{ "Transform.Name", "ESBZStageMiscDebugDataType::Transform" },
				{ "Vector.Name", "ESBZStageMiscDebugDataType::Vector" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZStageMiscDebugDataType",
				"ESBZStageMiscDebugDataType",
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
