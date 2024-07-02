// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZHackingZone_generated_h
#error "SBZHackingZone.generated.h already included, missing '#pragma once' in SBZHackingZone.h"
#endif
#define STARBREEZE_SBZHackingZone_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_RPC_WRAPPERS \
	virtual void Multicast_SetZoneEnabled_Implementation(bool bInEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_SetZoneEnabled); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnRep_ZoneEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetZoneEnabled_Implementation(bool bInEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_SetZoneEnabled); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnRep_ZoneEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_EVENT_PARMS \
	struct SBZHackingZone_eventBP_EnabledStateChanged_Parms \
	{ \
		bool bNewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZHackingZone_eventBP_OnOverlapBegin_Parms \
	{ \
		bool bDoCosmetics; \
	}; \
	struct SBZHackingZone_eventBP_OnOverlapEnd_Parms \
	{ \
		bool bDoCosmetics; \
	}; \
	struct SBZHackingZone_eventMulticast_SetZoneEnabled_Parms \
	{ \
		bool bInEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHackingZone(); \
	friend struct Z_Construct_UClass_ASBZHackingZone_Statics; \
public: \
	DECLARE_CLASS(ASBZHackingZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackingZone) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZHackingZone(); \
	friend struct Z_Construct_UClass_ASBZHackingZone_Statics; \
public: \
	DECLARE_CLASS(ASBZHackingZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackingZone) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHackingZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackingZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackingZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackingZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackingZone(ASBZHackingZone&&); \
	NO_API ASBZHackingZone(const ASBZHackingZone&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackingZone(ASBZHackingZone&&); \
	NO_API ASBZHackingZone(const ASBZHackingZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackingZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackingZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackingZone)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ASBZHackingZone, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(ASBZHackingZone, bEnabled); } \
	FORCEINLINE static uint32 __PPO__ZoneIndex() { return STRUCT_OFFSET(ASBZHackingZone, ZoneIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveTime() { return STRUCT_OFFSET(ASBZHackingZone, ActiveTime); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHackingZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackingZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
