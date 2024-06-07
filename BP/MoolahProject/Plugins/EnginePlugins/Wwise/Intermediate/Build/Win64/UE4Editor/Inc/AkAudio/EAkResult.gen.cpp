// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkResult() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkResult();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkResult, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkResult"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkResult>()
	{
		return EAkResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkResult(EAkResult_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkResult_Hash() { return 3192174198U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkResult"), 0, Get_Z_Construct_UEnum_AkAudio_EAkResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkResult::NotImplemented", (int64)EAkResult::NotImplemented },
				{ "EAkResult::Success", (int64)EAkResult::Success },
				{ "EAkResult::Fail", (int64)EAkResult::Fail },
				{ "EAkResult::PartialSuccess", (int64)EAkResult::PartialSuccess },
				{ "EAkResult::NotCompatible", (int64)EAkResult::NotCompatible },
				{ "EAkResult::AlreadyConnected", (int64)EAkResult::AlreadyConnected },
				{ "EAkResult::InvalidFile", (int64)EAkResult::InvalidFile },
				{ "EAkResult::AudioFileHeaderTooLarge", (int64)EAkResult::AudioFileHeaderTooLarge },
				{ "EAkResult::MaxReached", (int64)EAkResult::MaxReached },
				{ "EAkResult::InvalidID", (int64)EAkResult::InvalidID },
				{ "EAkResult::IDNotFound", (int64)EAkResult::IDNotFound },
				{ "EAkResult::InvalidInstanceID", (int64)EAkResult::InvalidInstanceID },
				{ "EAkResult::NoMoreData", (int64)EAkResult::NoMoreData },
				{ "EAkResult::InvalidStateGroup", (int64)EAkResult::InvalidStateGroup },
				{ "EAkResult::ChildAlreadyHasAParent", (int64)EAkResult::ChildAlreadyHasAParent },
				{ "EAkResult::InvalidLanguage", (int64)EAkResult::InvalidLanguage },
				{ "EAkResult::CannotAddItseflAsAChild", (int64)EAkResult::CannotAddItseflAsAChild },
				{ "EAkResult::InvalidParameter", (int64)EAkResult::InvalidParameter },
				{ "EAkResult::ElementAlreadyInList", (int64)EAkResult::ElementAlreadyInList },
				{ "EAkResult::PathNotFound", (int64)EAkResult::PathNotFound },
				{ "EAkResult::PathNoVertices", (int64)EAkResult::PathNoVertices },
				{ "EAkResult::PathNotRunning", (int64)EAkResult::PathNotRunning },
				{ "EAkResult::PathNotPaused", (int64)EAkResult::PathNotPaused },
				{ "EAkResult::PathNodeAlreadyInList", (int64)EAkResult::PathNodeAlreadyInList },
				{ "EAkResult::PathNodeNotInList", (int64)EAkResult::PathNodeNotInList },
				{ "EAkResult::DataNeeded", (int64)EAkResult::DataNeeded },
				{ "EAkResult::NoDataNeeded", (int64)EAkResult::NoDataNeeded },
				{ "EAkResult::DataReady", (int64)EAkResult::DataReady },
				{ "EAkResult::NoDataReady", (int64)EAkResult::NoDataReady },
				{ "EAkResult::InsufficientMemory", (int64)EAkResult::InsufficientMemory },
				{ "EAkResult::Cancelled", (int64)EAkResult::Cancelled },
				{ "EAkResult::UnknownBankID", (int64)EAkResult::UnknownBankID },
				{ "EAkResult::BankReadError", (int64)EAkResult::BankReadError },
				{ "EAkResult::InvalidSwitchType", (int64)EAkResult::InvalidSwitchType },
				{ "EAkResult::FormatNotReady", (int64)EAkResult::FormatNotReady },
				{ "EAkResult::WrongBankVersion", (int64)EAkResult::WrongBankVersion },
				{ "EAkResult::FileNotFound", (int64)EAkResult::FileNotFound },
				{ "EAkResult::DeviceNotReady", (int64)EAkResult::DeviceNotReady },
				{ "EAkResult::BankAlreadyLoaded", (int64)EAkResult::BankAlreadyLoaded },
				{ "EAkResult::RenderedFX", (int64)EAkResult::RenderedFX },
				{ "EAkResult::ProcessNeeded", (int64)EAkResult::ProcessNeeded },
				{ "EAkResult::ProcessDone", (int64)EAkResult::ProcessDone },
				{ "EAkResult::MemManagerNotInitialized", (int64)EAkResult::MemManagerNotInitialized },
				{ "EAkResult::StreamMgrNotInitialized", (int64)EAkResult::StreamMgrNotInitialized },
				{ "EAkResult::SSEInstructionsNotSupported", (int64)EAkResult::SSEInstructionsNotSupported },
				{ "EAkResult::Busy", (int64)EAkResult::Busy },
				{ "EAkResult::UnsupportedChannelConfig", (int64)EAkResult::UnsupportedChannelConfig },
				{ "EAkResult::PluginMediaNotAvailable", (int64)EAkResult::PluginMediaNotAvailable },
				{ "EAkResult::MustBeVirtualized", (int64)EAkResult::MustBeVirtualized },
				{ "EAkResult::CommandTooLarge", (int64)EAkResult::CommandTooLarge },
				{ "EAkResult::RejectedByFilter", (int64)EAkResult::RejectedByFilter },
				{ "EAkResult::InvalidCustomPlatformName", (int64)EAkResult::InvalidCustomPlatformName },
				{ "EAkResult::DLLCannotLoad", (int64)EAkResult::DLLCannotLoad },
				{ "EAkResult::DLLPathNotFound", (int64)EAkResult::DLLPathNotFound },
				{ "EAkResult::NoJavaVM", (int64)EAkResult::NoJavaVM },
				{ "EAkResult::OpenSLError", (int64)EAkResult::OpenSLError },
				{ "EAkResult::PluginNotRegistered", (int64)EAkResult::PluginNotRegistered },
				{ "EAkResult::DataAlignmentError", (int64)EAkResult::DataAlignmentError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyConnected.Name", "EAkResult::AlreadyConnected" },
				{ "AudioFileHeaderTooLarge.Name", "EAkResult::AudioFileHeaderTooLarge" },
				{ "BankAlreadyLoaded.Name", "EAkResult::BankAlreadyLoaded" },
				{ "BankReadError.Name", "EAkResult::BankReadError" },
				{ "BlueprintType", "true" },
				{ "Busy.Name", "EAkResult::Busy" },
				{ "Cancelled.Name", "EAkResult::Cancelled" },
				{ "CannotAddItseflAsAChild.Name", "EAkResult::CannotAddItseflAsAChild" },
				{ "ChildAlreadyHasAParent.Name", "EAkResult::ChildAlreadyHasAParent" },
				{ "CommandTooLarge.Name", "EAkResult::CommandTooLarge" },
				{ "DataAlignmentError.Name", "EAkResult::DataAlignmentError" },
				{ "DataNeeded.Name", "EAkResult::DataNeeded" },
				{ "DataReady.Name", "EAkResult::DataReady" },
				{ "DeviceNotReady.Name", "EAkResult::DeviceNotReady" },
				{ "DLLCannotLoad.Name", "EAkResult::DLLCannotLoad" },
				{ "DLLPathNotFound.Name", "EAkResult::DLLPathNotFound" },
				{ "ElementAlreadyInList.Name", "EAkResult::ElementAlreadyInList" },
				{ "Fail.Name", "EAkResult::Fail" },
				{ "FileNotFound.Name", "EAkResult::FileNotFound" },
				{ "FormatNotReady.Name", "EAkResult::FormatNotReady" },
				{ "IDNotFound.Name", "EAkResult::IDNotFound" },
				{ "InsufficientMemory.Name", "EAkResult::InsufficientMemory" },
				{ "InvalidCustomPlatformName.Name", "EAkResult::InvalidCustomPlatformName" },
				{ "InvalidFile.Name", "EAkResult::InvalidFile" },
				{ "InvalidID.Name", "EAkResult::InvalidID" },
				{ "InvalidInstanceID.Name", "EAkResult::InvalidInstanceID" },
				{ "InvalidLanguage.Name", "EAkResult::InvalidLanguage" },
				{ "InvalidParameter.Name", "EAkResult::InvalidParameter" },
				{ "InvalidStateGroup.Name", "EAkResult::InvalidStateGroup" },
				{ "InvalidSwitchType.Name", "EAkResult::InvalidSwitchType" },
				{ "MaxReached.Name", "EAkResult::MaxReached" },
				{ "MemManagerNotInitialized.Name", "EAkResult::MemManagerNotInitialized" },
				{ "ModuleRelativePath", "Public/EAkResult.h" },
				{ "MustBeVirtualized.Name", "EAkResult::MustBeVirtualized" },
				{ "NoDataNeeded.Name", "EAkResult::NoDataNeeded" },
				{ "NoDataReady.Name", "EAkResult::NoDataReady" },
				{ "NoJavaVM.Name", "EAkResult::NoJavaVM" },
				{ "NoMoreData.Name", "EAkResult::NoMoreData" },
				{ "NotCompatible.Name", "EAkResult::NotCompatible" },
				{ "NotImplemented.Name", "EAkResult::NotImplemented" },
				{ "OpenSLError.Name", "EAkResult::OpenSLError" },
				{ "PartialSuccess.Name", "EAkResult::PartialSuccess" },
				{ "PathNodeAlreadyInList.Name", "EAkResult::PathNodeAlreadyInList" },
				{ "PathNodeNotInList.Name", "EAkResult::PathNodeNotInList" },
				{ "PathNotFound.Name", "EAkResult::PathNotFound" },
				{ "PathNotPaused.Name", "EAkResult::PathNotPaused" },
				{ "PathNotRunning.Name", "EAkResult::PathNotRunning" },
				{ "PathNoVertices.Name", "EAkResult::PathNoVertices" },
				{ "PluginMediaNotAvailable.Name", "EAkResult::PluginMediaNotAvailable" },
				{ "PluginNotRegistered.Name", "EAkResult::PluginNotRegistered" },
				{ "ProcessDone.Name", "EAkResult::ProcessDone" },
				{ "ProcessNeeded.Name", "EAkResult::ProcessNeeded" },
				{ "RejectedByFilter.Name", "EAkResult::RejectedByFilter" },
				{ "RenderedFX.Name", "EAkResult::RenderedFX" },
				{ "SSEInstructionsNotSupported.Name", "EAkResult::SSEInstructionsNotSupported" },
				{ "StreamMgrNotInitialized.Name", "EAkResult::StreamMgrNotInitialized" },
				{ "Success.Name", "EAkResult::Success" },
				{ "UnknownBankID.Name", "EAkResult::UnknownBankID" },
				{ "UnsupportedChannelConfig.Name", "EAkResult::UnsupportedChannelConfig" },
				{ "WrongBankVersion.Name", "EAkResult::WrongBankVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkResult",
				"EAkResult",
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
