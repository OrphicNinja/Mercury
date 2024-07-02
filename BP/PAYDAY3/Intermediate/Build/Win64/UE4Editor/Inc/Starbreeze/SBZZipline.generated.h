// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class AActor;
struct FVector;
class UPrimitiveComponent;
struct FHitResult;
#ifdef STARBREEZE_SBZZipline_generated_h
#error "SBZZipline.generated.h already included, missing '#pragma once' in SBZZipline.h"
#endif
#define STARBREEZE_SBZZipline_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_RPC_WRAPPERS \
	virtual void Multicast_ZiplineEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_ZiplineEnabled); \
	DECLARE_FUNCTION(execOnCompleteInteraction); \
	DECLARE_FUNCTION(execOnNavLinkReached); \
	DECLARE_FUNCTION(execOnRep_ZiplineEnabled); \
	DECLARE_FUNCTION(execOnZiplineBeginOverlap); \
	DECLARE_FUNCTION(execOnZiplineEnabledCallback); \
	DECLARE_FUNCTION(execSetZiplineEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ZiplineEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_ZiplineEnabled); \
	DECLARE_FUNCTION(execOnCompleteInteraction); \
	DECLARE_FUNCTION(execOnNavLinkReached); \
	DECLARE_FUNCTION(execOnRep_ZiplineEnabled); \
	DECLARE_FUNCTION(execOnZiplineBeginOverlap); \
	DECLARE_FUNCTION(execOnZiplineEnabledCallback); \
	DECLARE_FUNCTION(execSetZiplineEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_EVENT_PARMS \
	struct SBZZipline_eventBP_OnZiplineEnabledChanged_Parms \
	{ \
		bool bEnabled; \
		bool bDoCosmetics; \
	}; \
	struct SBZZipline_eventMulticast_ZiplineEnabled_Parms \
	{ \
		bool bEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZZipline(); \
	friend struct Z_Construct_UClass_ASBZZipline_Statics; \
public: \
	DECLARE_CLASS(ASBZZipline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZZipline) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bZiplineEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bZiplineEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZZipline(); \
	friend struct Z_Construct_UClass_ASBZZipline_Statics; \
public: \
	DECLARE_CLASS(ASBZZipline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZZipline) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bZiplineEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bZiplineEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZZipline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZZipline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZZipline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZZipline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZZipline(ASBZZipline&&); \
	NO_API ASBZZipline(const ASBZZipline&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZZipline(ASBZZipline&&); \
	NO_API ASBZZipline(const ASBZZipline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZZipline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZZipline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZZipline)


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavLinkStart() { return STRUCT_OFFSET(ASBZZipline, NavLinkStart); } \
	FORCEINLINE static uint32 __PPO__NavLinkEnd() { return STRUCT_OFFSET(ASBZZipline, NavLinkEnd); } \
	FORCEINLINE static uint32 __PPO__bSnapNavLinkEnd() { return STRUCT_OFFSET(ASBZZipline, bSnapNavLinkEnd); } \
	FORCEINLINE static uint32 __PPO__bSnapNavLinkStart() { return STRUCT_OFFSET(ASBZZipline, bSnapNavLinkStart); } \
	FORCEINLINE static uint32 __PPO__ZiplineType() { return STRUCT_OFFSET(ASBZZipline, ZiplineType); } \
	FORCEINLINE static uint32 __PPO__OverlapBox() { return STRUCT_OFFSET(ASBZZipline, OverlapBox); } \
	FORCEINLINE static uint32 __PPO__SplineComponent() { return STRUCT_OFFSET(ASBZZipline, SplineComponent); } \
	FORCEINLINE static uint32 __PPO__StartPointMesh() { return STRUCT_OFFSET(ASBZZipline, StartPointMesh); } \
	FORCEINLINE static uint32 __PPO__EndPointMesh() { return STRUCT_OFFSET(ASBZZipline, EndPointMesh); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZZipline, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__NavLink() { return STRUCT_OFFSET(ASBZZipline, NavLink); } \
	FORCEINLINE static uint32 __PPO__StartDropoffVelocity() { return STRUCT_OFFSET(ASBZZipline, StartDropoffVelocity); } \
	FORCEINLINE static uint32 __PPO__EndDropoffVelocity() { return STRUCT_OFFSET(ASBZZipline, EndDropoffVelocity); } \
	FORCEINLINE static uint32 __PPO__MaxDistanceSolverIterations() { return STRUCT_OFFSET(ASBZZipline, MaxDistanceSolverIterations); } \
	FORCEINLINE static uint32 __PPO__ExitLaunchSpeed() { return STRUCT_OFFSET(ASBZZipline, ExitLaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__bDisabledAtStart() { return STRUCT_OFFSET(ASBZZipline, bDisabledAtStart); } \
	FORCEINLINE static uint32 __PPO__bZiplineEnabled() { return STRUCT_OFFSET(ASBZZipline, bZiplineEnabled); } \
	FORCEINLINE static uint32 __PPO__DistanceFromEndToStop() { return STRUCT_OFFSET(ASBZZipline, DistanceFromEndToStop); } \
	FORCEINLINE static uint32 __PPO__HalfExtentSizeToAdd() { return STRUCT_OFFSET(ASBZZipline, HalfExtentSizeToAdd); } \
	FORCEINLINE static uint32 __PPO__StartForcedDirectionThreshold() { return STRUCT_OFFSET(ASBZZipline, StartForcedDirectionThreshold); } \
	FORCEINLINE static uint32 __PPO__EndForcedDirectionThreshold() { return STRUCT_OFFSET(ASBZZipline, EndForcedDirectionThreshold); }


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZZipline_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZZipline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZZipline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
