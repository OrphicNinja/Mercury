// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STARBREEZE_SBZRoomConnectorComponent_generated_h
#error "SBZRoomConnectorComponent.generated.h already included, missing '#pragma once' in SBZRoomConnectorComponent.h"
#endif
#define STARBREEZE_SBZRoomConnectorComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAllowSoundToPassUnmodified); \
	DECLARE_FUNCTION(execBlockSoundCompletly); \
	DECLARE_FUNCTION(execSetRoomConnectorEnabled); \
	DECLARE_FUNCTION(execSetSoundModifier);


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAllowSoundToPassUnmodified); \
	DECLARE_FUNCTION(execBlockSoundCompletly); \
	DECLARE_FUNCTION(execSetRoomConnectorEnabled); \
	DECLARE_FUNCTION(execSetSoundModifier);


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_EVENT_PARMS \
	struct SBZRoomConnectorComponent_eventGetRoomALocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZRoomConnectorComponent_eventGetRoomALocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct SBZRoomConnectorComponent_eventGetRoomBLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZRoomConnectorComponent_eventGetRoomBLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZRoomConnectorComponent(); \
	friend struct Z_Construct_UClass_USBZRoomConnectorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZRoomConnectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRoomConnectorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZRoomConnectorComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZRoomConnectorComponent(); \
	friend struct Z_Construct_UClass_USBZRoomConnectorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZRoomConnectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRoomConnectorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZRoomConnectorComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRoomConnectorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRoomConnectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRoomConnectorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRoomConnectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRoomConnectorComponent(USBZRoomConnectorComponent&&); \
	NO_API USBZRoomConnectorComponent(const USBZRoomConnectorComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRoomConnectorComponent(USBZRoomConnectorComponent&&); \
	NO_API USBZRoomConnectorComponent(const USBZRoomConnectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRoomConnectorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRoomConnectorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRoomConnectorComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsAIBreachable() { return STRUCT_OFFSET(USBZRoomConnectorComponent, bIsAIBreachable); } \
	FORCEINLINE static uint32 __PPO__InitialSoundModifier() { return STRUCT_OFFSET(USBZRoomConnectorComponent, InitialSoundModifier); } \
	FORCEINLINE static uint32 __PPO__RoomA() { return STRUCT_OFFSET(USBZRoomConnectorComponent, RoomA); } \
	FORCEINLINE static uint32 __PPO__RoomB() { return STRUCT_OFFSET(USBZRoomConnectorComponent, RoomB); } \
	FORCEINLINE static uint32 __PPO__RoomCheckDistance() { return STRUCT_OFFSET(USBZRoomConnectorComponent, RoomCheckDistance); } \
	FORCEINLINE static uint32 __PPO__bIsUsedForRoomPathing() { return STRUCT_OFFSET(USBZRoomConnectorComponent, bIsUsedForRoomPathing); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZRoomConnectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
