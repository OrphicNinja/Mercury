// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZHackableActorState : uint8;
struct FSBZLocationInformation;
#ifdef STARBREEZE_SBZHackableInfoActor_generated_h
#error "SBZHackableInfoActor.generated.h already included, missing '#pragma once' in SBZHackableInfoActor.h"
#endif
#define STARBREEZE_SBZHackableInfoActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_RPC_WRAPPERS \
	virtual void Multicast_ResetHackableActorToGenericHack_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ResetHackableActorToGenericHack); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execResetHackableActorToGenericHack);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ResetHackableActorToGenericHack_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ResetHackableActorToGenericHack); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execResetHackableActorToGenericHack);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_EVENT_PARMS \
	struct SBZHackableInfoActor_eventBP_SetInformation_Parms \
	{ \
		FSBZLocationInformation OutLocationInformation; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHackableInfoActor(); \
	friend struct Z_Construct_UClass_ASBZHackableInfoActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackableInfoActor, ASBZHackableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackableInfoActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasBeenResetToGenericHack=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasBeenResetToGenericHack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZHackableInfoActor(); \
	friend struct Z_Construct_UClass_ASBZHackableInfoActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackableInfoActor, ASBZHackableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackableInfoActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasBeenResetToGenericHack=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasBeenResetToGenericHack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHackableInfoActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackableInfoActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackableInfoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackableInfoActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackableInfoActor(ASBZHackableInfoActor&&); \
	NO_API ASBZHackableInfoActor(const ASBZHackableInfoActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackableInfoActor(ASBZHackableInfoActor&&); \
	NO_API ASBZHackableInfoActor(const ASBZHackableInfoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackableInfoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackableInfoActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackableInfoActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasBeenResetToGenericHack() { return STRUCT_OFFSET(ASBZHackableInfoActor, bHasBeenResetToGenericHack); } \
	FORCEINLINE static uint32 __PPO__CustomInfoProcessText() { return STRUCT_OFFSET(ASBZHackableInfoActor, CustomInfoProcessText); } \
	FORCEINLINE static uint32 __PPO__bShouldResetOnHeistStateChange() { return STRUCT_OFFSET(ASBZHackableInfoActor, bShouldResetOnHeistStateChange); } \
	FORCEINLINE static uint32 __PPO__DurationSecondsAfterReset() { return STRUCT_OFFSET(ASBZHackableInfoActor, DurationSecondsAfterReset); } \
	FORCEINLINE static uint32 __PPO__StateToResetTo() { return STRUCT_OFFSET(ASBZHackableInfoActor, StateToResetTo); } \
	FORCEINLINE static uint32 __PPO__bShouldKeepCustomMessage() { return STRUCT_OFFSET(ASBZHackableInfoActor, bShouldKeepCustomMessage); } \
	FORCEINLINE static uint32 __PPO__bShouldResetToGenericHack() { return STRUCT_OFFSET(ASBZHackableInfoActor, bShouldResetToGenericHack); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHackableInfoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackableInfoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
