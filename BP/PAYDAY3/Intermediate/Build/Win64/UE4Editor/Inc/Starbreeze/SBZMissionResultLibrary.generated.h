// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZEndMissionResultData;
class UObject;
struct FSBZCharacterEndMissionResultData;
struct FSBZEquippableEndMissionResultData;
struct FSBZPlayerEndMissionResultData;
#ifdef STARBREEZE_SBZMissionResultLibrary_generated_h
#error "SBZMissionResultLibrary.generated.h already included, missing '#pragma once' in SBZMissionResultLibrary.h"
#endif
#define STARBREEZE_SBZMissionResultLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllPlayersBeenDefeatedCount); \
	DECLARE_FUNCTION(execGetAllPlayersBeenKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersBeenRevivedCount); \
	DECLARE_FUNCTION(execGetAllPlayersEquippableAccuracy); \
	DECLARE_FUNCTION(execGetAllPlayersHaveCivilianKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersHaveGuardKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersHaveKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersHaveSpecialKilledCount); \
	DECLARE_FUNCTION(execGetCurrentPlayerEquippableAccuracy); \
	DECLARE_FUNCTION(execGetEquippableData); \
	DECLARE_FUNCTION(execGetPlayerCashReward); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execGetTotalNumberOfSecuredBags);


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllPlayersBeenDefeatedCount); \
	DECLARE_FUNCTION(execGetAllPlayersBeenKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersBeenRevivedCount); \
	DECLARE_FUNCTION(execGetAllPlayersEquippableAccuracy); \
	DECLARE_FUNCTION(execGetAllPlayersHaveCivilianKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersHaveGuardKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersHaveKilledCount); \
	DECLARE_FUNCTION(execGetAllPlayersHaveSpecialKilledCount); \
	DECLARE_FUNCTION(execGetCurrentPlayerEquippableAccuracy); \
	DECLARE_FUNCTION(execGetEquippableData); \
	DECLARE_FUNCTION(execGetPlayerCashReward); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execGetTotalNumberOfSecuredBags);


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMissionResultLibrary(); \
	friend struct Z_Construct_UClass_USBZMissionResultLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMissionResultLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMissionResultLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMissionResultLibrary(); \
	friend struct Z_Construct_UClass_USBZMissionResultLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMissionResultLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMissionResultLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMissionResultLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMissionResultLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMissionResultLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMissionResultLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMissionResultLibrary(USBZMissionResultLibrary&&); \
	NO_API USBZMissionResultLibrary(const USBZMissionResultLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMissionResultLibrary(USBZMissionResultLibrary&&); \
	NO_API USBZMissionResultLibrary(const USBZMissionResultLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMissionResultLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMissionResultLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMissionResultLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMissionResultLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMissionResultLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
