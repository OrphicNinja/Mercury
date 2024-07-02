// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3SpawnSquadPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3SpawnSquadPawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SpawnSquadPawn();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PawnVariation_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UPD3SpawnSquadPawn::StaticRegisterNativesUPD3SpawnSquadPawn()
	{
	}
	UClass* Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister()
	{
		return UPD3SpawnSquadPawn::StaticClass();
	}
	struct Z_Construct_UClass_UPD3SpawnSquadPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnVariation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedHeistStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AllowedHeistStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRespectingMaxAILimit_MetaData[];
#endif
		static void NewProp_bIsRespectingMaxAILimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRespectingMaxAILimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedPawnType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3SpawnSquadPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquadPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_PawnVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquadPawn" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquadPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_PawnVariation = { "PawnVariation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SpawnSquadPawn, PawnVariation), Z_Construct_UClass_UPD3PawnVariation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_PawnVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_PawnVariation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_AllowedHeistStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquadPawn" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquadPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_AllowedHeistStates = { "AllowedHeistStates", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SpawnSquadPawn, AllowedHeistStates), METADATA_PARAMS(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_AllowedHeistStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_AllowedHeistStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquadPawn" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquadPawn.h" },
	};
#endif
	void Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit_SetBit(void* Obj)
	{
		((UPD3SpawnSquadPawn*)Obj)->bIsRespectingMaxAILimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit = { "bIsRespectingMaxAILimit", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3SpawnSquadPawn), &Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_CachedPawnType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquadPawn" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquadPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_CachedPawnType = { "CachedPawnType", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SpawnSquadPawn, CachedPawnType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_CachedPawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_CachedPawnType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_PawnVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_AllowedHeistStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_bIsRespectingMaxAILimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::NewProp_CachedPawnType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3SpawnSquadPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::ClassParams = {
		&UPD3SpawnSquadPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3SpawnSquadPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3SpawnSquadPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3SpawnSquadPawn, 450405812);
	template<> STARBREEZE_API UClass* StaticClass<UPD3SpawnSquadPawn>()
	{
		return UPD3SpawnSquadPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3SpawnSquadPawn(Z_Construct_UClass_UPD3SpawnSquadPawn, &UPD3SpawnSquadPawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3SpawnSquadPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3SpawnSquadPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
