// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZControlType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZControlType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZControlType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZControlType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZControlType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZControlType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZControlType>()
	{
		return ESBZControlType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZControlType(ESBZControlType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZControlType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZControlType_Hash() { return 2394906473U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZControlType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZControlType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZControlType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZControlType::ActionClick", (int64)ESBZControlType::ActionClick },
				{ "ESBZControlType::Toggle", (int64)ESBZControlType::Toggle },
				{ "ESBZControlType::MultipleChoice", (int64)ESBZControlType::MultipleChoice },
				{ "ESBZControlType::FramerateChoice", (int64)ESBZControlType::FramerateChoice },
				{ "ESBZControlType::GamepadPresetChoice", (int64)ESBZControlType::GamepadPresetChoice },
				{ "ESBZControlType::ResolutionChoice", (int64)ESBZControlType::ResolutionChoice },
				{ "ESBZControlType::AntiAliasingModeChoice", (int64)ESBZControlType::AntiAliasingModeChoice },
				{ "ESBZControlType::UpscalerChoice", (int64)ESBZControlType::UpscalerChoice },
				{ "ESBZControlType::UpscalingModeChoice", (int64)ESBZControlType::UpscalingModeChoice },
				{ "ESBZControlType::Slider", (int64)ESBZControlType::Slider },
				{ "ESBZControlType::KeyboardInputBinding", (int64)ESBZControlType::KeyboardInputBinding },
				{ "ESBZControlType::GamepadInputBinding", (int64)ESBZControlType::GamepadInputBinding },
				{ "ESBZControlType::StringControl", (int64)ESBZControlType::StringControl },
				{ "ESBZControlType::ColorControl", (int64)ESBZControlType::ColorControl },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionClick.Name", "ESBZControlType::ActionClick" },
				{ "AntiAliasingModeChoice.Name", "ESBZControlType::AntiAliasingModeChoice" },
				{ "BlueprintType", "true" },
				{ "ColorControl.Name", "ESBZControlType::ColorControl" },
				{ "FramerateChoice.Name", "ESBZControlType::FramerateChoice" },
				{ "GamepadInputBinding.Name", "ESBZControlType::GamepadInputBinding" },
				{ "GamepadPresetChoice.Name", "ESBZControlType::GamepadPresetChoice" },
				{ "KeyboardInputBinding.Name", "ESBZControlType::KeyboardInputBinding" },
				{ "ModuleRelativePath", "Public/ESBZControlType.h" },
				{ "MultipleChoice.Name", "ESBZControlType::MultipleChoice" },
				{ "ResolutionChoice.Name", "ESBZControlType::ResolutionChoice" },
				{ "Slider.Name", "ESBZControlType::Slider" },
				{ "StringControl.Name", "ESBZControlType::StringControl" },
				{ "Toggle.Name", "ESBZControlType::Toggle" },
				{ "UpscalerChoice.Name", "ESBZControlType::UpscalerChoice" },
				{ "UpscalingModeChoice.Name", "ESBZControlType::UpscalingModeChoice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZControlType",
				"ESBZControlType",
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
