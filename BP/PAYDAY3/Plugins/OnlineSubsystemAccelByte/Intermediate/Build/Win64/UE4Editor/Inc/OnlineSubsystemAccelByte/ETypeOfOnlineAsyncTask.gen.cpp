// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemAccelByte/Public/ETypeOfOnlineAsyncTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETypeOfOnlineAsyncTask() {}
// Cross Module References
	ONLINESUBSYSTEMACCELBYTE_API UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_ETypeOfOnlineAsyncTask();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
// End Cross Module References
	static UEnum* ETypeOfOnlineAsyncTask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemAccelByte_ETypeOfOnlineAsyncTask, Z_Construct_UPackage__Script_OnlineSubsystemAccelByte(), TEXT("ETypeOfOnlineAsyncTask"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMACCELBYTE_API UEnum* StaticEnum<ETypeOfOnlineAsyncTask>()
	{
		return ETypeOfOnlineAsyncTask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypeOfOnlineAsyncTask(ETypeOfOnlineAsyncTask_StaticEnum, TEXT("/Script/OnlineSubsystemAccelByte"), TEXT("ETypeOfOnlineAsyncTask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_ETypeOfOnlineAsyncTask_Hash() { return 1028670532U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_ETypeOfOnlineAsyncTask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypeOfOnlineAsyncTask"), 0, Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_ETypeOfOnlineAsyncTask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETypeOfOnlineAsyncTask::Serial", (int64)ETypeOfOnlineAsyncTask::Serial },
				{ "ETypeOfOnlineAsyncTask::Parallel", (int64)ETypeOfOnlineAsyncTask::Parallel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETypeOfOnlineAsyncTask.h" },
				{ "Parallel.Name", "ETypeOfOnlineAsyncTask::Parallel" },
				{ "Serial.Name", "ETypeOfOnlineAsyncTask::Serial" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemAccelByte,
				nullptr,
				"ETypeOfOnlineAsyncTask",
				"ETypeOfOnlineAsyncTask",
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
