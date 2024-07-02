// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZPedestrianTrafficNavLink_generated_h
#error "SBZPedestrianTrafficNavLink.generated.h already included, missing '#pragma once' in SBZPedestrianTrafficNavLink.h"
#endif
#define STARBREEZE_SBZPedestrianTrafficNavLink_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execSetTrafficAllowed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execSetTrafficAllowed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPedestrianTrafficNavLink(); \
	friend struct Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics; \
public: \
	DECLARE_CLASS(ASBZPedestrianTrafficNavLink, ASBZSmartNavLink, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPedestrianTrafficNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZPedestrianTrafficNavLink(); \
	friend struct Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics; \
public: \
	DECLARE_CLASS(ASBZPedestrianTrafficNavLink, ASBZSmartNavLink, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPedestrianTrafficNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPedestrianTrafficNavLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPedestrianTrafficNavLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPedestrianTrafficNavLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPedestrianTrafficNavLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPedestrianTrafficNavLink(ASBZPedestrianTrafficNavLink&&); \
	NO_API ASBZPedestrianTrafficNavLink(const ASBZPedestrianTrafficNavLink&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPedestrianTrafficNavLink(ASBZPedestrianTrafficNavLink&&); \
	NO_API ASBZPedestrianTrafficNavLink(const ASBZPedestrianTrafficNavLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPedestrianTrafficNavLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPedestrianTrafficNavLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPedestrianTrafficNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaitSlots() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, WaitSlots); } \
	FORCEINLINE static uint32 __PPO__CrossingEnd() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, CrossingEnd); } \
	FORCEINLINE static uint32 __PPO__HalfCrossingWidth() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, HalfCrossingWidth); } \
	FORCEINLINE static uint32 __PPO__LaneCount() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, LaneCount); } \
	FORCEINLINE static uint32 __PPO__CharacterDelayBeforePathing() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, CharacterDelayBeforePathing); } \
	FORCEINLINE static uint32 __PPO__LinkedTrafficVolumes() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, LinkedTrafficVolumes); } \
	FORCEINLINE static uint32 __PPO__CrossingCharacters() { return STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, CrossingCharacters); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPedestrianTrafficNavLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPedestrianTrafficNavLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
