// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USBZBaseInteractableComponent;
#ifdef STARBREEZE_SBZCarriedHackableKey_generated_h
#error "SBZCarriedHackableKey.generated.h already included, missing '#pragma once' in SBZCarriedHackableKey.h"
#endif
#define STARBREEZE_SBZCarriedHackableKey_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_RPC_WRAPPERS \
	virtual void Multicast_OnHackComplete_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnHackComplete); \
	DECLARE_FUNCTION(execOnHackerEndPlay); \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnHackComplete_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnHackComplete); \
	DECLARE_FUNCTION(execOnHackerEndPlay); \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_EVENT_PARMS \
	struct SBZCarriedHackableKey_eventBP_OnHackStarted_Parms \
	{ \
		bool bIsLocallyControlled; \
	}; \
	struct SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms \
	{ \
		bool bInRange; \
		bool bWasInRange; \
		float Progress; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCarriedHackableKey(); \
	friend struct Z_Construct_UClass_ASBZCarriedHackableKey_Statics; \
public: \
	DECLARE_CLASS(ASBZCarriedHackableKey, ASBZCarriedStaticInteractionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCarriedHackableKey)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZCarriedHackableKey(); \
	friend struct Z_Construct_UClass_ASBZCarriedHackableKey_Statics; \
public: \
	DECLARE_CLASS(ASBZCarriedHackableKey, ASBZCarriedStaticInteractionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCarriedHackableKey)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCarriedHackableKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCarriedHackableKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCarriedHackableKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCarriedHackableKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCarriedHackableKey(ASBZCarriedHackableKey&&); \
	NO_API ASBZCarriedHackableKey(const ASBZCarriedHackableKey&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCarriedHackableKey(ASBZCarriedHackableKey&&); \
	NO_API ASBZCarriedHackableKey(const ASBZCarriedHackableKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCarriedHackableKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCarriedHackableKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCarriedHackableKey)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoneEffect() { return STRUCT_OFFSET(ASBZCarriedHackableKey, ZoneEffect); } \
	FORCEINLINE static uint32 __PPO__HackDuration() { return STRUCT_OFFSET(ASBZCarriedHackableKey, HackDuration); } \
	FORCEINLINE static uint32 __PPO__SharedKeyItemTagsToGrant() { return STRUCT_OFFSET(ASBZCarriedHackableKey, SharedKeyItemTagsToGrant); } \
	FORCEINLINE static uint32 __PPO__DistanceCheckFrequency() { return STRUCT_OFFSET(ASBZCarriedHackableKey, DistanceCheckFrequency); } \
	FORCEINLINE static uint32 __PPO__MaxAllowedDistance() { return STRUCT_OFFSET(ASBZCarriedHackableKey, MaxAllowedDistance); } \
	FORCEINLINE static uint32 __PPO__MaxChecksOutsideOfAllowedDistance() { return STRUCT_OFFSET(ASBZCarriedHackableKey, MaxChecksOutsideOfAllowedDistance); } \
	FORCEINLINE static uint32 __PPO__CurrentHackingCharacter() { return STRUCT_OFFSET(ASBZCarriedHackableKey, CurrentHackingCharacter); } \
	FORCEINLINE static uint32 __PPO__CheckOutsideCircleCount() { return STRUCT_OFFSET(ASBZCarriedHackableKey, CheckOutsideCircleCount); } \
	FORCEINLINE static uint32 __PPO__ChecksMade() { return STRUCT_OFFSET(ASBZCarriedHackableKey, ChecksMade); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCarriedHackableKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCarriedHackableKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
