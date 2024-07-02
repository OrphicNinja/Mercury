// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZConnectorDrawingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZConnectorDrawingState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZConnectorDrawingState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZConnectorDrawingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZConnectorDrawingState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZConnectorDrawingState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZConnectorDrawingState>()
	{
		return ESBZConnectorDrawingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZConnectorDrawingState(ESBZConnectorDrawingState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZConnectorDrawingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZConnectorDrawingState_Hash() { return 2771174981U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZConnectorDrawingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZConnectorDrawingState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZConnectorDrawingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZConnectorDrawingState::Volumes", (int64)ESBZConnectorDrawingState::Volumes },
				{ "ESBZConnectorDrawingState::Doors", (int64)ESBZConnectorDrawingState::Doors },
				{ "ESBZConnectorDrawingState::Components", (int64)ESBZConnectorDrawingState::Components },
				{ "ESBZConnectorDrawingState::Navlinks", (int64)ESBZConnectorDrawingState::Navlinks },
				{ "ESBZConnectorDrawingState::Other", (int64)ESBZConnectorDrawingState::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Components.Name", "ESBZConnectorDrawingState::Components" },
				{ "Doors.Name", "ESBZConnectorDrawingState::Doors" },
				{ "ModuleRelativePath", "Public/ESBZConnectorDrawingState.h" },
				{ "Navlinks.Name", "ESBZConnectorDrawingState::Navlinks" },
				{ "Other.Name", "ESBZConnectorDrawingState::Other" },
				{ "Volumes.Name", "ESBZConnectorDrawingState::Volumes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZConnectorDrawingState",
				"ESBZConnectorDrawingState",
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
