// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZAIOrder_SecurityRoom_generated_h
#error "SBZAIOrder_SecurityRoom.generated.h already included, missing '#pragma once' in SBZAIOrder_SecurityRoom.h"
#endif
#define STARBREEZE_SBZAIOrder_SecurityRoom_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPausedFunc);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPausedFunc);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_SecurityRoom(); \
	friend struct Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_SecurityRoom, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_SecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_SecurityRoom(); \
	friend struct Z_Construct_UClass_USBZAIOrder_SecurityRoom_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_SecurityRoom, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_SecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIOrder_SecurityRoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIOrder_SecurityRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_SecurityRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_SecurityRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_SecurityRoom(USBZAIOrder_SecurityRoom&&); \
	NO_API USBZAIOrder_SecurityRoom(const USBZAIOrder_SecurityRoom&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_SecurityRoom(USBZAIOrder_SecurityRoom&&); \
	NO_API USBZAIOrder_SecurityRoom(const USBZAIOrder_SecurityRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_SecurityRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_SecurityRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIOrder_SecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SecurityRoom() { return STRUCT_OFFSET(USBZAIOrder_SecurityRoom, SecurityRoom); } \
	FORCEINLINE static uint32 __PPO__OwnerController() { return STRUCT_OFFSET(USBZAIOrder_SecurityRoom, OwnerController); } \
	FORCEINLINE static uint32 __PPO__SecurityRoomVolume() { return STRUCT_OFFSET(USBZAIOrder_SecurityRoom, SecurityRoomVolume); } \
	FORCEINLINE static uint32 __PPO__Gates() { return STRUCT_OFFSET(USBZAIOrder_SecurityRoom, Gates); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIOrder_SecurityRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_SecurityRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
