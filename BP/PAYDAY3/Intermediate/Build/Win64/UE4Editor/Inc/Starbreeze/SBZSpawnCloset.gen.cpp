// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnCloset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnCloset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpawnCloset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpawnCloset();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSpawnCloset::execBindRoomVolumeOverlaps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindRoomVolumeOverlaps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSpawnCloset::execOnHeistGoneLoud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistGoneLoud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSpawnCloset::execOnRoomVolumeBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRoomVolumeBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSpawnCloset::execOnRoomVolumeEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRoomVolumeEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ASBZSpawnCloset::StaticRegisterNativesASBZSpawnCloset()
	{
		UClass* Class = ASBZSpawnCloset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindRoomVolumeOverlaps", &ASBZSpawnCloset::execBindRoomVolumeOverlaps },
			{ "OnHeistGoneLoud", &ASBZSpawnCloset::execOnHeistGoneLoud },
			{ "OnRoomVolumeBeginOverlap", &ASBZSpawnCloset::execOnRoomVolumeBeginOverlap },
			{ "OnRoomVolumeEndOverlap", &ASBZSpawnCloset::execOnRoomVolumeEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnCloset, nullptr, "BindRoomVolumeOverlaps", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnCloset, nullptr, "OnHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics
	{
		struct SBZSpawnCloset_eventOnRoomVolumeBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnCloset_eventOnRoomVolumeBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnCloset_eventOnRoomVolumeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnCloset, nullptr, "OnRoomVolumeBeginOverlap", nullptr, nullptr, sizeof(SBZSpawnCloset_eventOnRoomVolumeBeginOverlap_Parms), Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics
	{
		struct SBZSpawnCloset_eventOnRoomVolumeEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnCloset_eventOnRoomVolumeEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnCloset_eventOnRoomVolumeEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnCloset, nullptr, "OnRoomVolumeEndOverlap", nullptr, nullptr, sizeof(SBZSpawnCloset_eventOnRoomVolumeEndOverlap_Parms), Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSpawnCloset_NoRegister()
	{
		return ASBZSpawnCloset::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSpawnCloset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosetVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ClosetVolume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnGroupsInCloset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupsInCloset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnGroupsInCloset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reactors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Reactors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStayOpenDuringStealth_MetaData[];
#endif
		static void NewProp_bStayOpenDuringStealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStayOpenDuringStealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReactionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBlockingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBlockingActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorsInVolume_MetaData[];
#endif
		static void NewProp_bActorsInVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorsInVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStealth_MetaData[];
#endif
		static void NewProp_bIsStealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStealth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CiviliansInVolume_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CiviliansInVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CiviliansInVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSpawnCloset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSpawnCloset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSpawnCloset_BindRoomVolumeOverlaps, "BindRoomVolumeOverlaps" }, // 1118343012
		{ &Z_Construct_UFunction_ASBZSpawnCloset_OnHeistGoneLoud, "OnHeistGoneLoud" }, // 2304359036
		{ &Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeBeginOverlap, "OnRoomVolumeBeginOverlap" }, // 2606347857
		{ &Z_Construct_UFunction_ASBZSpawnCloset_OnRoomVolumeEndOverlap, "OnRoomVolumeEndOverlap" }, // 2731562626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSpawnCloset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ClosetVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ClosetVolume = { "ClosetVolume", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnCloset, ClosetVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ClosetVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ClosetVolume_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset_Inner = { "SpawnGroupsInCloset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset = { "SpawnGroupsInCloset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnCloset, SpawnGroupsInCloset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors_Inner = { "Reactors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors = { "Reactors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnCloset, Reactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth_SetBit(void* Obj)
	{
		((ASBZSpawnCloset*)Obj)->bStayOpenDuringStealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth = { "bStayOpenDuringStealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSpawnCloset), &Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ReactionDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ReactionDelay = { "ReactionDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnCloset, ReactionDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ReactionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ReactionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_NumberOfBlockingActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_NumberOfBlockingActors = { "NumberOfBlockingActors", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnCloset, NumberOfBlockingActors), METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_NumberOfBlockingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_NumberOfBlockingActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume_SetBit(void* Obj)
	{
		((ASBZSpawnCloset*)Obj)->bActorsInVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume = { "bActorsInVolume", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSpawnCloset), &Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth_SetBit(void* Obj)
	{
		((ASBZSpawnCloset*)Obj)->bIsStealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth = { "bIsStealth", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSpawnCloset), &Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume_Inner = { "CiviliansInVolume", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnCloset" },
		{ "ModuleRelativePath", "Public/SBZSpawnCloset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume = { "CiviliansInVolume", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnCloset, CiviliansInVolume), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSpawnCloset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ClosetVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_SpawnGroupsInCloset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_Reactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bStayOpenDuringStealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_ReactionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_NumberOfBlockingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bActorsInVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_bIsStealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnCloset_Statics::NewProp_CiviliansInVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSpawnCloset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSpawnCloset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSpawnCloset_Statics::ClassParams = {
		&ASBZSpawnCloset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSpawnCloset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnCloset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnCloset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSpawnCloset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSpawnCloset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSpawnCloset, 1450458459);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSpawnCloset>()
	{
		return ASBZSpawnCloset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSpawnCloset(Z_Construct_UClass_ASBZSpawnCloset, &ASBZSpawnCloset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSpawnCloset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSpawnCloset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
