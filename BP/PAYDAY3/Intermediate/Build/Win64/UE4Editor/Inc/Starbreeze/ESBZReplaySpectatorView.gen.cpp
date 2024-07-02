// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZReplaySpectatorView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZReplaySpectatorView() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZReplaySpectatorView_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZReplaySpectatorView"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZReplaySpectatorView>()
	{
		return ESBZReplaySpectatorView_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZReplaySpectatorView(ESBZReplaySpectatorView_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZReplaySpectatorView"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView_Hash() { return 1377377017U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZReplaySpectatorView"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZReplaySpectatorView::FirstPersonView", (int64)ESBZReplaySpectatorView::FirstPersonView },
				{ "ESBZReplaySpectatorView::ThirdPersonView", (int64)ESBZReplaySpectatorView::ThirdPersonView },
				{ "ESBZReplaySpectatorView::FreeCameraView", (int64)ESBZReplaySpectatorView::FreeCameraView },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FirstPersonView.Name", "ESBZReplaySpectatorView::FirstPersonView" },
				{ "FreeCameraView.Name", "ESBZReplaySpectatorView::FreeCameraView" },
				{ "ModuleRelativePath", "Public/ESBZReplaySpectatorView.h" },
				{ "ThirdPersonView.Name", "ESBZReplaySpectatorView::ThirdPersonView" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZReplaySpectatorView",
				"ESBZReplaySpectatorView",
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
