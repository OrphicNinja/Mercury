// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZHackableActorState : uint8;
#ifdef STARBREEZE_SBZHackableCodeActor_generated_h
#error "SBZHackableCodeActor.generated.h already included, missing '#pragma once' in SBZHackableCodeActor.h"
#endif
#define STARBREEZE_SBZHackableCodeActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_RPC_WRAPPERS \
	virtual void Multicast_ResetHackableActorToGenericHack_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ResetHackableActorToGenericHack); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execResetHackableActorToGenericHack);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ResetHackableActorToGenericHack_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ResetHackableActorToGenericHack); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execResetHackableActorToGenericHack);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHackableCodeActor(); \
	friend struct Z_Construct_UClass_ASBZHackableCodeActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackableCodeActor, ASBZHackableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackableCodeActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Codes=NETFIELD_REP_START, \
		bIsResetToGenericHack, \
		NETFIELD_REP_END=bIsResetToGenericHack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZHackableCodeActor(); \
	friend struct Z_Construct_UClass_ASBZHackableCodeActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackableCodeActor, ASBZHackableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackableCodeActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Codes=NETFIELD_REP_START, \
		bIsResetToGenericHack, \
		NETFIELD_REP_END=bIsResetToGenericHack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHackableCodeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackableCodeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackableCodeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackableCodeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackableCodeActor(ASBZHackableCodeActor&&); \
	NO_API ASBZHackableCodeActor(const ASBZHackableCodeActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackableCodeActor(ASBZHackableCodeActor&&); \
	NO_API ASBZHackableCodeActor(const ASBZHackableCodeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackableCodeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackableCodeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackableCodeActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Codes() { return STRUCT_OFFSET(ASBZHackableCodeActor, Codes); } \
	FORCEINLINE static uint32 __PPO__NumberOfCodes() { return STRUCT_OFFSET(ASBZHackableCodeActor, NumberOfCodes); } \
	FORCEINLINE static uint32 __PPO__CustomCodeProcessText() { return STRUCT_OFFSET(ASBZHackableCodeActor, CustomCodeProcessText); } \
	FORCEINLINE static uint32 __PPO__bShouldResetOnHeistStateChange() { return STRUCT_OFFSET(ASBZHackableCodeActor, bShouldResetOnHeistStateChange); } \
	FORCEINLINE static uint32 __PPO__DurationSecondsAfterReset() { return STRUCT_OFFSET(ASBZHackableCodeActor, DurationSecondsAfterReset); } \
	FORCEINLINE static uint32 __PPO__StateToResetTo() { return STRUCT_OFFSET(ASBZHackableCodeActor, StateToResetTo); } \
	FORCEINLINE static uint32 __PPO__bShouldKeepCustomMessage() { return STRUCT_OFFSET(ASBZHackableCodeActor, bShouldKeepCustomMessage); } \
	FORCEINLINE static uint32 __PPO__bShouldResetToGenericHack() { return STRUCT_OFFSET(ASBZHackableCodeActor, bShouldResetToGenericHack); } \
	FORCEINLINE static uint32 __PPO__bIsResetToGenericHack() { return STRUCT_OFFSET(ASBZHackableCodeActor, bIsResetToGenericHack); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHackableCodeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackableCodeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
