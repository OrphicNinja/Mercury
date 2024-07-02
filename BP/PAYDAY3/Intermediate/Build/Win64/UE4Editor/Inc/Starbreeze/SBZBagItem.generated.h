// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZZipline;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZBagItem_generated_h
#error "SBZBagItem.generated.h already included, missing '#pragma once' in SBZBagItem.h"
#endif
#define STARBREEZE_SBZBagItem_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_RPC_WRAPPERS \
	virtual void Multicast_SetZipline_Implementation(ASBZZipline* Zipline, const float InTimeOnZipline, bool bInIsMovingForward); \
 \
	DECLARE_FUNCTION(execMulticast_SetZipline); \
	DECLARE_FUNCTION(execOnPickup); \
	DECLARE_FUNCTION(execOnRep_BagId); \
	DECLARE_FUNCTION(execOnRep_CurrentZipline); \
	DECLARE_FUNCTION(execSecureBag);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetZipline_Implementation(ASBZZipline* Zipline, const float InTimeOnZipline, bool bInIsMovingForward); \
 \
	DECLARE_FUNCTION(execMulticast_SetZipline); \
	DECLARE_FUNCTION(execOnPickup); \
	DECLARE_FUNCTION(execOnRep_BagId); \
	DECLARE_FUNCTION(execOnRep_CurrentZipline); \
	DECLARE_FUNCTION(execSecureBag);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_EVENT_PARMS \
	struct SBZBagItem_eventBP_OnDegradationChanged_Parms \
	{ \
		int32 DegredationLevel; \
	}; \
	struct SBZBagItem_eventBP_OnZiplineAttachmentChanged_Parms \
	{ \
		bool bIsAttached; \
	}; \
	struct SBZBagItem_eventMulticast_SetZipline_Parms \
	{ \
		ASBZZipline* Zipline; \
		float InTimeOnZipline; \
		bool bInIsMovingForward; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBagItem(); \
	friend struct Z_Construct_UClass_ASBZBagItem_Statics; \
public: \
	DECLARE_CLASS(ASBZBagItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBagItem) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZBagItem*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentZipLine=NETFIELD_REP_START, \
		TimeOnZipline, \
		bIsMovingOnZiplineForward, \
		BagId, \
		NETFIELD_REP_END=BagId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASBZBagItem(); \
	friend struct Z_Construct_UClass_ASBZBagItem_Statics; \
public: \
	DECLARE_CLASS(ASBZBagItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBagItem) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZBagItem*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentZipLine=NETFIELD_REP_START, \
		TimeOnZipline, \
		bIsMovingOnZiplineForward, \
		BagId, \
		NETFIELD_REP_END=BagId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZBagItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBagItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBagItem(ASBZBagItem&&); \
	NO_API ASBZBagItem(const ASBZBagItem&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBagItem(ASBZBagItem&&); \
	NO_API ASBZBagItem(const ASBZBagItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBagItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagItem)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZBagItem, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZBagItem, Interactable); } \
	FORCEINLINE static uint32 __PPO__PhysicsCorrector() { return STRUCT_OFFSET(ASBZBagItem, PhysicsCorrector); } \
	FORCEINLINE static uint32 __PPO__ObjectiveComponent() { return STRUCT_OFFSET(ASBZBagItem, ObjectiveComponent); } \
	FORCEINLINE static uint32 __PPO__Bag() { return STRUCT_OFFSET(ASBZBagItem, Bag); } \
	FORCEINLINE static uint32 __PPO__CurrentZipLine() { return STRUCT_OFFSET(ASBZBagItem, CurrentZipLine); } \
	FORCEINLINE static uint32 __PPO__TimeOnZipline() { return STRUCT_OFFSET(ASBZBagItem, TimeOnZipline); } \
	FORCEINLINE static uint32 __PPO__bIsMovingOnZiplineForward() { return STRUCT_OFFSET(ASBZBagItem, bIsMovingOnZiplineForward); } \
	FORCEINLINE static uint32 __PPO__BagId() { return STRUCT_OFFSET(ASBZBagItem, BagId); } \
	FORCEINLINE static uint32 __PPO__InteractionDelay() { return STRUCT_OFFSET(ASBZBagItem, InteractionDelay); } \
	FORCEINLINE static uint32 __PPO__ZiplineParams() { return STRUCT_OFFSET(ASBZBagItem, ZiplineParams); } \
	FORCEINLINE static uint32 __PPO__bCanCrewAICarry() { return STRUCT_OFFSET(ASBZBagItem, bCanCrewAICarry); } \
	FORCEINLINE static uint32 __PPO__bShouldBroadcastOnHitEvent() { return STRUCT_OFFSET(ASBZBagItem, bShouldBroadcastOnHitEvent); } \
	FORCEINLINE static uint32 __PPO__MarkerID() { return STRUCT_OFFSET(ASBZBagItem, MarkerID); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBagItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
