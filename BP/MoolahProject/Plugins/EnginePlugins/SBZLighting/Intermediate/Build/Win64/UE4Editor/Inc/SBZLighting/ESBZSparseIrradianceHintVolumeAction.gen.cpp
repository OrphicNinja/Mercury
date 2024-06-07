// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/ESBZSparseIrradianceHintVolumeAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSparseIrradianceHintVolumeAction() {}
// Cross Module References
	SBZLIGHTING_API UEnum* Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
// End Cross Module References
	static UEnum* ESBZSparseIrradianceHintVolumeAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction, Z_Construct_UPackage__Script_SBZLighting(), TEXT("ESBZSparseIrradianceHintVolumeAction"));
		}
		return Singleton;
	}
	template<> SBZLIGHTING_API UEnum* StaticEnum<ESBZSparseIrradianceHintVolumeAction::Type>()
	{
		return ESBZSparseIrradianceHintVolumeAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSparseIrradianceHintVolumeAction(ESBZSparseIrradianceHintVolumeAction_StaticEnum, TEXT("/Script/SBZLighting"), TEXT("ESBZSparseIrradianceHintVolumeAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction_Hash() { return 168168838U; }
	UEnum* Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SBZLighting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSparseIrradianceHintVolumeAction"), 0, Get_Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSparseIrradianceHintVolumeAction::ExcludeTriangles", (int64)ESBZSparseIrradianceHintVolumeAction::ExcludeTriangles },
				{ "ESBZSparseIrradianceHintVolumeAction::VoxelizeEmptySpace", (int64)ESBZSparseIrradianceHintVolumeAction::VoxelizeEmptySpace },
				{ "ESBZSparseIrradianceHintVolumeAction::DiscardEmptySpaceProbes", (int64)ESBZSparseIrradianceHintVolumeAction::DiscardEmptySpaceProbes },
				{ "ESBZSparseIrradianceHintVolumeAction::DiscardAllProbes", (int64)ESBZSparseIrradianceHintVolumeAction::DiscardAllProbes },
				{ "ESBZSparseIrradianceHintVolumeAction::RepulseProbes", (int64)ESBZSparseIrradianceHintVolumeAction::RepulseProbes },
				{ "ESBZSparseIrradianceHintVolumeAction::DisableCompression", (int64)ESBZSparseIrradianceHintVolumeAction::DisableCompression },
				{ "ESBZSparseIrradianceHintVolumeAction::Max", (int64)ESBZSparseIrradianceHintVolumeAction::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisableCompression.Name", "ESBZSparseIrradianceHintVolumeAction::DisableCompression" },
				{ "DiscardAllProbes.Name", "ESBZSparseIrradianceHintVolumeAction::DiscardAllProbes" },
				{ "DiscardEmptySpaceProbes.Name", "ESBZSparseIrradianceHintVolumeAction::DiscardEmptySpaceProbes" },
				{ "ExcludeTriangles.Name", "ESBZSparseIrradianceHintVolumeAction::ExcludeTriangles" },
				{ "Max.Name", "ESBZSparseIrradianceHintVolumeAction::Max" },
				{ "ModuleRelativePath", "Public/ESBZSparseIrradianceHintVolumeAction.h" },
				{ "RepulseProbes.Name", "ESBZSparseIrradianceHintVolumeAction::RepulseProbes" },
				{ "VoxelizeEmptySpace.Name", "ESBZSparseIrradianceHintVolumeAction::VoxelizeEmptySpace" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SBZLighting,
				nullptr,
				"ESBZSparseIrradianceHintVolumeAction",
				"ESBZSparseIrradianceHintVolumeAction::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
