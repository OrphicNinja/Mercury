// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZMusicManager;
class UAkAudioEvent;
#ifdef STARBREEZE_SBZMusicManager_generated_h
#error "SBZMusicManager.generated.h already included, missing '#pragma once' in SBZMusicManager.h"
#endif
#define STARBREEZE_SBZMusicManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMusicManager); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execPlayMusic); \
	DECLARE_FUNCTION(execPostEndMusicSequence); \
	DECLARE_FUNCTION(execSetMuted); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStopMusic);


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMusicManager); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execPlayMusic); \
	DECLARE_FUNCTION(execPostEndMusicSequence); \
	DECLARE_FUNCTION(execSetMuted); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStopMusic);


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMusicManager(); \
	friend struct Z_Construct_UClass_USBZMusicManager_Statics; \
public: \
	DECLARE_CLASS(USBZMusicManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMusicManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMusicManager(); \
	friend struct Z_Construct_UClass_USBZMusicManager_Statics; \
public: \
	DECLARE_CLASS(USBZMusicManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMusicManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMusicManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMusicManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMusicManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMusicManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMusicManager(USBZMusicManager&&); \
	NO_API USBZMusicManager(const USBZMusicManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMusicManager(USBZMusicManager&&); \
	NO_API USBZMusicManager(const USBZMusicManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMusicManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMusicManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMusicManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentVolume() { return STRUCT_OFFSET(USBZMusicManager, CurrentVolume); } \
	FORCEINLINE static uint32 __PPO__bIsMusicMainMenu() { return STRUCT_OFFSET(USBZMusicManager, bIsMusicMainMenu); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMusicManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMusicManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
