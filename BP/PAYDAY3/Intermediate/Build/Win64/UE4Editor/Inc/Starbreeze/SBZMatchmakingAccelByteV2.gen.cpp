// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmakingAccelByteV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmakingAccelByteV2() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingAccelByteV2_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingAccelByteV2();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZQueuedJoinLobby();
// End Cross Module References
	void USBZMatchmakingAccelByteV2::StaticRegisterNativesUSBZMatchmakingAccelByteV2()
	{
	}
	UClass* Z_Construct_UClass_USBZMatchmakingAccelByteV2_NoRegister()
	{
		return USBZMatchmakingAccelByteV2::StaticClass();
	}
	struct Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedJoinLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueuedJoinLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMatchmaking,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMatchmakingAccelByteV2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAccelByteV2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::NewProp_QueuedJoinLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingAccelByteV2" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAccelByteV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::NewProp_QueuedJoinLobby = { "QueuedJoinLobby", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMatchmakingAccelByteV2, QueuedJoinLobby), Z_Construct_UScriptStruct_FSBZQueuedJoinLobby, METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::NewProp_QueuedJoinLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::NewProp_QueuedJoinLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::NewProp_QueuedJoinLobby,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMatchmakingAccelByteV2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::ClassParams = {
		&USBZMatchmakingAccelByteV2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::PropPointers),
		0,
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMatchmakingAccelByteV2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMatchmakingAccelByteV2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMatchmakingAccelByteV2, 1363569727);
	template<> STARBREEZE_API UClass* StaticClass<USBZMatchmakingAccelByteV2>()
	{
		return USBZMatchmakingAccelByteV2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMatchmakingAccelByteV2(Z_Construct_UClass_USBZMatchmakingAccelByteV2, &USBZMatchmakingAccelByteV2::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMatchmakingAccelByteV2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMatchmakingAccelByteV2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
