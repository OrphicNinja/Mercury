// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class AGameModeBase;
struct FUniqueNetIdRepl;
class ASBZPlayerState;
#ifdef STARBREEZE_SBZOnlineSlotsSync_generated_h
#error "SBZOnlineSlotsSync.generated.h already included, missing '#pragma once' in SBZOnlineSlotsSync.h"
#endif
#define STARBREEZE_SBZOnlineSlotsSync_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAddPlayerState); \
	DECLARE_FUNCTION(execOnGameModeInitialized); \
	DECLARE_FUNCTION(execOnRemovePlayerState); \
	DECLARE_FUNCTION(execOnRep_SlotsData); \
	DECLARE_FUNCTION(execSyncSlotsData); \
	DECLARE_FUNCTION(execUniqueIdUpdated); \
	DECLARE_FUNCTION(execUpdateInfamyLevel); \
	DECLARE_FUNCTION(execUpdatePlatform); \
	DECLARE_FUNCTION(execUpdatePlayerName);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAddPlayerState); \
	DECLARE_FUNCTION(execOnGameModeInitialized); \
	DECLARE_FUNCTION(execOnRemovePlayerState); \
	DECLARE_FUNCTION(execOnRep_SlotsData); \
	DECLARE_FUNCTION(execSyncSlotsData); \
	DECLARE_FUNCTION(execUniqueIdUpdated); \
	DECLARE_FUNCTION(execUpdateInfamyLevel); \
	DECLARE_FUNCTION(execUpdatePlatform); \
	DECLARE_FUNCTION(execUpdatePlayerName);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZOnlineSlotsSync(); \
	friend struct Z_Construct_UClass_ASBZOnlineSlotsSync_Statics; \
public: \
	DECLARE_CLASS(ASBZOnlineSlotsSync, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZOnlineSlotsSync) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SlotsData=NETFIELD_REP_START, \
		NETFIELD_REP_END=SlotsData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZOnlineSlotsSync(); \
	friend struct Z_Construct_UClass_ASBZOnlineSlotsSync_Statics; \
public: \
	DECLARE_CLASS(ASBZOnlineSlotsSync, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZOnlineSlotsSync) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SlotsData=NETFIELD_REP_START, \
		NETFIELD_REP_END=SlotsData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZOnlineSlotsSync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZOnlineSlotsSync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZOnlineSlotsSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZOnlineSlotsSync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZOnlineSlotsSync(ASBZOnlineSlotsSync&&); \
	NO_API ASBZOnlineSlotsSync(const ASBZOnlineSlotsSync&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZOnlineSlotsSync(ASBZOnlineSlotsSync&&); \
	NO_API ASBZOnlineSlotsSync(const ASBZOnlineSlotsSync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZOnlineSlotsSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZOnlineSlotsSync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZOnlineSlotsSync)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SlotsData() { return STRUCT_OFFSET(ASBZOnlineSlotsSync, SlotsData); } \
	FORCEINLINE static uint32 __PPO__OnlineSession() { return STRUCT_OFFSET(ASBZOnlineSlotsSync, OnlineSession); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZOnlineSlotsSync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsSync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
