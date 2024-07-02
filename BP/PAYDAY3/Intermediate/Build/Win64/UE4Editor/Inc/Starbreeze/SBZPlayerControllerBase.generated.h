// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZFirstPartyPlatform : uint8;
struct FPD3PlayerLoadout;
#ifdef STARBREEZE_SBZPlayerControllerBase_generated_h
#error "SBZPlayerControllerBase.generated.h already included, missing '#pragma once' in SBZPlayerControllerBase.h"
#endif
#define STARBREEZE_SBZPlayerControllerBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_RPC_WRAPPERS \
	virtual void Server_SetAccelByteSessionInformation_Implementation(const FString& InAccelByteUserId, const FString& InSessionId, const ESBZFirstPartyPlatform FirstPartyPlatform); \
	virtual bool Server_SetLoadout_Validate(FPD3PlayerLoadout const& ); \
	virtual void Server_SetLoadout_Implementation(FPD3PlayerLoadout const& Loadout); \
	virtual void Server_SetPausedPreferred_Implementation(bool bInIsPaused); \
 \
	DECLARE_FUNCTION(execBP_IsPaused); \
	DECLARE_FUNCTION(execIsPausedPreferred); \
	DECLARE_FUNCTION(execServer_SetAccelByteSessionInformation); \
	DECLARE_FUNCTION(execServer_SetLoadout); \
	DECLARE_FUNCTION(execServer_SetPausedPreferred); \
	DECLARE_FUNCTION(execSetPausedPreferred);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SetAccelByteSessionInformation_Implementation(const FString& InAccelByteUserId, const FString& InSessionId, const ESBZFirstPartyPlatform FirstPartyPlatform); \
	virtual bool Server_SetLoadout_Validate(FPD3PlayerLoadout const& ); \
	virtual void Server_SetLoadout_Implementation(FPD3PlayerLoadout const& Loadout); \
	virtual void Server_SetPausedPreferred_Implementation(bool bInIsPaused); \
 \
	DECLARE_FUNCTION(execBP_IsPaused); \
	DECLARE_FUNCTION(execIsPausedPreferred); \
	DECLARE_FUNCTION(execServer_SetAccelByteSessionInformation); \
	DECLARE_FUNCTION(execServer_SetLoadout); \
	DECLARE_FUNCTION(execServer_SetPausedPreferred); \
	DECLARE_FUNCTION(execSetPausedPreferred);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_EVENT_PARMS \
	struct SBZPlayerControllerBase_eventServer_SetAccelByteSessionInformation_Parms \
	{ \
		FString InAccelByteUserId; \
		FString InSessionId; \
		ESBZFirstPartyPlatform FirstPartyPlatform; \
	}; \
	struct SBZPlayerControllerBase_eventServer_SetLoadout_Parms \
	{ \
		FPD3PlayerLoadout Loadout; \
	}; \
	struct SBZPlayerControllerBase_eventServer_SetPausedPreferred_Parms \
	{ \
		bool bInIsPaused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ASBZPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerControllerBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ASBZPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerControllerBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerControllerBase(ASBZPlayerControllerBase&&); \
	NO_API ASBZPlayerControllerBase(const ASBZPlayerControllerBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerControllerBase(ASBZPlayerControllerBase&&); \
	NO_API ASBZPlayerControllerBase(const ASBZPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerControllerBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SBZPlayerState() { return STRUCT_OFFSET(ASBZPlayerControllerBase, SBZPlayerState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
