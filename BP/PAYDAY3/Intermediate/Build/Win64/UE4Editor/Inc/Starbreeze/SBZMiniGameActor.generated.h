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
enum class EPD3MiniGameState : uint8;
#ifdef STARBREEZE_SBZMiniGameActor_generated_h
#error "SBZMiniGameActor.generated.h already included, missing '#pragma once' in SBZMiniGameActor.h"
#endif
#define STARBREEZE_SBZMiniGameActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_RPC_WRAPPERS \
	virtual void Multicast_OnComplete_Implementation(); \
	virtual void Multicast_SetMiniGameIgnored_Implementation(bool bIgnored); \
 \
	DECLARE_FUNCTION(execMulticast_OnComplete); \
	DECLARE_FUNCTION(execMulticast_SetMiniGameIgnored); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnInteractableStateChanged); \
	DECLARE_FUNCTION(execOnMiniGameStateChanged); \
	DECLARE_FUNCTION(execOnRep_IsUnlocked); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetMiniGameIgnored);


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnComplete_Implementation(); \
	virtual void Multicast_SetMiniGameIgnored_Implementation(bool bIgnored); \
 \
	DECLARE_FUNCTION(execMulticast_OnComplete); \
	DECLARE_FUNCTION(execMulticast_SetMiniGameIgnored); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnInteractableStateChanged); \
	DECLARE_FUNCTION(execOnMiniGameStateChanged); \
	DECLARE_FUNCTION(execOnRep_IsUnlocked); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetMiniGameIgnored);


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_EVENT_PARMS \
	struct SBZMiniGameActor_eventBP_OnMiniGameSuccess_Parms \
	{ \
		bool bDoCosmetics; \
	}; \
	struct SBZMiniGameActor_eventMulticast_SetMiniGameIgnored_Parms \
	{ \
		bool bIgnored; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMiniGameActor(); \
	friend struct Z_Construct_UClass_ASBZMiniGameActor_Statics; \
public: \
	DECLARE_CLASS(ASBZMiniGameActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMiniGameActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsUnlocked=NETFIELD_REP_START, \
		bIsMiniGameIgnored, \
		NETFIELD_REP_END=bIsMiniGameIgnored	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZMiniGameActor(); \
	friend struct Z_Construct_UClass_ASBZMiniGameActor_Statics; \
public: \
	DECLARE_CLASS(ASBZMiniGameActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMiniGameActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsUnlocked=NETFIELD_REP_START, \
		bIsMiniGameIgnored, \
		NETFIELD_REP_END=bIsMiniGameIgnored	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMiniGameActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMiniGameActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMiniGameActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMiniGameActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMiniGameActor(ASBZMiniGameActor&&); \
	NO_API ASBZMiniGameActor(const ASBZMiniGameActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMiniGameActor(ASBZMiniGameActor&&); \
	NO_API ASBZMiniGameActor(const ASBZMiniGameActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMiniGameActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMiniGameActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMiniGameActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsUnlocked() { return STRUCT_OFFSET(ASBZMiniGameActor, bIsUnlocked); } \
	FORCEINLINE static uint32 __PPO__bIsMiniGameIgnored() { return STRUCT_OFFSET(ASBZMiniGameActor, bIsMiniGameIgnored); } \
	FORCEINLINE static uint32 __PPO__MiniGameComponent() { return STRUCT_OFFSET(ASBZMiniGameActor, MiniGameComponent); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZMiniGameActor, Interactable); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZMiniGameActor, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZMiniGameActor, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__WidgetComponent() { return STRUCT_OFFSET(ASBZMiniGameActor, WidgetComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_16_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMiniGameActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMiniGameActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
