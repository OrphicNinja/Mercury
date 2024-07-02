// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTraverseAnimationHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTraverseAnimationHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTraverseAnimationHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTraverseAnimationHandler"), sizeof(FSBZTraverseAnimationHandler), Get_Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTraverseAnimationHandler>()
{
	return FSBZTraverseAnimationHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTraverseAnimationHandler(FSBZTraverseAnimationHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTraverseAnimationHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTraverseAnimationHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTraverseAnimationHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZTraverseAnimationHandler>(FName(TEXT("SBZTraverseAnimationHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTraverseAnimationHandler;
	struct Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStart_MetaData[];
#endif
		static void NewProp_bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraverse_MetaData[];
#endif
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExitTraverse_MetaData[];
#endif
		static void NewProp_bExitTraverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExitTraverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLand_MetaData[];
#endif
		static void NewProp_bLand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFall_MetaData[];
#endif
		static void NewProp_bFall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEndsInFalling_MetaData[];
#endif
		static void NewProp_bEndsInFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndsInFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMantle_MetaData[];
#endif
		static void NewProp_bMantle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMantle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalDistToFrontEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalDistToFrontEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalDistFromBackEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalDistFromBackEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitTraverseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExitTraverseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitTraverseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitTraverseAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTraverseAnimationHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bTraverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bExitTraverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse = { "bExitTraverse", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bLand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand = { "bLand", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bFall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall = { "bFall", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bEndsInFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling = { "bEndsInFalling", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle_SetBit(void* Obj)
	{
		((FSBZTraverseAnimationHandler*)Obj)->bMantle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle = { "bMantle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTraverseAnimationHandler), &Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistToFrontEdge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistToFrontEdge = { "VerticalDistToFrontEdge", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, VerticalDistToFrontEdge), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistToFrontEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistToFrontEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistFromBackEdge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistFromBackEdge = { "VerticalDistFromBackEdge", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, VerticalDistFromBackEdge), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistFromBackEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistFromBackEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseTime = { "ExitTraverseTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, ExitTraverseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_StartAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_StartAnim = { "StartAnim", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, StartAnim), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_StartAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_StartAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseAnim = { "ExitTraverseAnim", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, ExitTraverseAnim), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_LandAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_LandAnim = { "LandAnim", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, LandAnim), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_LandAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_LandAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_EndMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraverseAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZTraverseAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_EndMontage = { "EndMontage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTraverseAnimationHandler, EndMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_EndMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_EndMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bTraverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bExitTraverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bEndsInFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_bMantle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistToFrontEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_VerticalDistFromBackEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_StartAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_ExitTraverseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_LandAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::NewProp_EndMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTraverseAnimationHandler",
		sizeof(FSBZTraverseAnimationHandler),
		alignof(FSBZTraverseAnimationHandler),
		Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTraverseAnimationHandler"), sizeof(FSBZTraverseAnimationHandler), Get_Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler_Hash() { return 2050128424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
