// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
enum class EPD3DefeatState : uint8;
class ASBZAICrewCharacter;
#ifdef STARBREEZE_SBZAICrewState_generated_h
#error "SBZAICrewState.generated.h already included, missing '#pragma once' in SBZAICrewState.h"
#endif
#define STARBREEZE_SBZAICrewState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_RPC_WRAPPERS \
	virtual void Multicast_SetDefeatState_Implementation(EPD3DefeatState InState); \
	virtual void Multicast_SetMaskOn_Implementation(bool bMaskOn); \
 \
	DECLARE_FUNCTION(execGetCharacterIcon); \
	DECLARE_FUNCTION(execGetCharacterName); \
	DECLARE_FUNCTION(execMulticast_SetDefeatState); \
	DECLARE_FUNCTION(execMulticast_SetMaskOn); \
	DECLARE_FUNCTION(execOnRep_Character); \
	DECLARE_FUNCTION(execOnRep_DefeatState); \
	DECLARE_FUNCTION(execOnRep_IsMaskOn);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetDefeatState_Implementation(EPD3DefeatState InState); \
	virtual void Multicast_SetMaskOn_Implementation(bool bMaskOn); \
 \
	DECLARE_FUNCTION(execGetCharacterIcon); \
	DECLARE_FUNCTION(execGetCharacterName); \
	DECLARE_FUNCTION(execMulticast_SetDefeatState); \
	DECLARE_FUNCTION(execMulticast_SetMaskOn); \
	DECLARE_FUNCTION(execOnRep_Character); \
	DECLARE_FUNCTION(execOnRep_DefeatState); \
	DECLARE_FUNCTION(execOnRep_IsMaskOn);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_EVENT_PARMS \
	struct SBZAICrewState_eventMulticast_SetDefeatState_Parms \
	{ \
		EPD3DefeatState InState; \
	}; \
	struct SBZAICrewState_eventMulticast_SetMaskOn_Parms \
	{ \
		bool bMaskOn; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAICrewState(); \
	friend struct Z_Construct_UClass_ASBZAICrewState_Statics; \
public: \
	DECLARE_CLASS(ASBZAICrewState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICrewState) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAICrewState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Character=NETFIELD_REP_START, \
		DefeatState, \
		bIsMaskOn, \
		NETFIELD_REP_END=bIsMaskOn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZAICrewState(); \
	friend struct Z_Construct_UClass_ASBZAICrewState_Statics; \
public: \
	DECLARE_CLASS(ASBZAICrewState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICrewState) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAICrewState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Character=NETFIELD_REP_START, \
		DefeatState, \
		bIsMaskOn, \
		NETFIELD_REP_END=bIsMaskOn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAICrewState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICrewState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICrewState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICrewState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICrewState(ASBZAICrewState&&); \
	NO_API ASBZAICrewState(const ASBZAICrewState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICrewState(ASBZAICrewState&&); \
	NO_API ASBZAICrewState(const ASBZAICrewState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICrewState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICrewState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICrewState)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(ASBZAICrewState, Character); } \
	FORCEINLINE static uint32 __PPO__CharacterClass() { return STRUCT_OFFSET(ASBZAICrewState, CharacterClass); } \
	FORCEINLINE static uint32 __PPO__DefeatState() { return STRUCT_OFFSET(ASBZAICrewState, DefeatState); } \
	FORCEINLINE static uint32 __PPO__OldDefeatState() { return STRUCT_OFFSET(ASBZAICrewState, OldDefeatState); } \
	FORCEINLINE static uint32 __PPO__bIsMaskOn() { return STRUCT_OFFSET(ASBZAICrewState, bIsMaskOn); } \
	FORCEINLINE static uint32 __PPO__CachedCharacterName() { return STRUCT_OFFSET(ASBZAICrewState, CachedCharacterName); } \
	FORCEINLINE static uint32 __PPO__CachedCrewAIColor() { return STRUCT_OFFSET(ASBZAICrewState, CachedCrewAIColor); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAICrewState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICrewState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
