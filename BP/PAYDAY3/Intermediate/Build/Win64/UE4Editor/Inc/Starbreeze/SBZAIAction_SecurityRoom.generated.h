// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
class AActor;
#ifdef STARBREEZE_SBZAIAction_SecurityRoom_generated_h
#error "SBZAIAction_SecurityRoom.generated.h already included, missing '#pragma once' in SBZAIAction_SecurityRoom.h"
#endif
#define STARBREEZE_SBZAIAction_SecurityRoom_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearDelegates); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnSecurityRoomVolumeBeginOverlap);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearDelegates); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnSecurityRoomVolumeBeginOverlap);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIAction_SecurityRoom(); \
	friend struct Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics; \
public: \
	DECLARE_CLASS(USBZAIAction_SecurityRoom, USBZAIAction_Order, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAction_SecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIAction_SecurityRoom(); \
	friend struct Z_Construct_UClass_USBZAIAction_SecurityRoom_Statics; \
public: \
	DECLARE_CLASS(USBZAIAction_SecurityRoom, USBZAIAction_Order, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAction_SecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAction_SecurityRoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAction_SecurityRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAction_SecurityRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAction_SecurityRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAction_SecurityRoom(USBZAIAction_SecurityRoom&&); \
	NO_API USBZAIAction_SecurityRoom(const USBZAIAction_SecurityRoom&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAction_SecurityRoom(USBZAIAction_SecurityRoom&&); \
	NO_API USBZAIAction_SecurityRoom(const USBZAIAction_SecurityRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAction_SecurityRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAction_SecurityRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIAction_SecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SecurityRoom() { return STRUCT_OFFSET(USBZAIAction_SecurityRoom, SecurityRoom); } \
	FORCEINLINE static uint32 __PPO__OwnerController() { return STRUCT_OFFSET(USBZAIAction_SecurityRoom, OwnerController); } \
	FORCEINLINE static uint32 __PPO__SecurityRoomVolume() { return STRUCT_OFFSET(USBZAIAction_SecurityRoom, SecurityRoomVolume); } \
	FORCEINLINE static uint32 __PPO__Gates() { return STRUCT_OFFSET(USBZAIAction_SecurityRoom, Gates); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIAction_SecurityRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAction_SecurityRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
