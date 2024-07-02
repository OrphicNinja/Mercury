// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZVolumeManager;
#ifdef STARBREEZE_SBZVolumeManager_generated_h
#error "SBZVolumeManager.generated.h already included, missing '#pragma once' in SBZVolumeManager.h"
#endif
#define STARBREEZE_SBZVolumeManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRelativeCinematicVolume); \
	DECLARE_FUNCTION(execGetVolumeManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRelativeCinematicVolume); \
	DECLARE_FUNCTION(execGetVolumeManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVolumeManager(); \
	friend struct Z_Construct_UClass_USBZVolumeManager_Statics; \
public: \
	DECLARE_CLASS(USBZVolumeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVolumeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVolumeManager(); \
	friend struct Z_Construct_UClass_USBZVolumeManager_Statics; \
public: \
	DECLARE_CLASS(USBZVolumeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVolumeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVolumeManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVolumeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVolumeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVolumeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVolumeManager(USBZVolumeManager&&); \
	NO_API USBZVolumeManager(const USBZVolumeManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVolumeManager(USBZVolumeManager&&); \
	NO_API USBZVolumeManager(const USBZVolumeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVolumeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVolumeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVolumeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MasterVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, MasterVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__MusicVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, MusicVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__SFXVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, SFXVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__VOVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, VOVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__HUDVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, HUDVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__VoipVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, VoipVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__CinematicVolumeSetting() { return STRUCT_OFFSET(USBZVolumeManager, CinematicVolumeSetting); } \
	FORCEINLINE static uint32 __PPO__PausedMuteSet() { return STRUCT_OFFSET(USBZVolumeManager, PausedMuteSet); } \
	FORCEINLINE static uint32 __PPO__PauseEvent() { return STRUCT_OFFSET(USBZVolumeManager, PauseEvent); } \
	FORCEINLINE static uint32 __PPO__ResumeEvent() { return STRUCT_OFFSET(USBZVolumeManager, ResumeEvent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVolumeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVolumeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
