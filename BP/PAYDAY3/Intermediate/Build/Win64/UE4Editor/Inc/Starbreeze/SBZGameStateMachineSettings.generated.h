// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSBZHeistCollection;
struct FSoftObjectPath;
#ifdef STARBREEZE_SBZGameStateMachineSettings_generated_h
#error "SBZGameStateMachineSettings.generated.h already included, missing '#pragma once' in SBZGameStateMachineSettings.h"
#endif
#define STARBREEZE_SBZGameStateMachineSettings_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeistCollections); \
	DECLARE_FUNCTION(execGetLevels); \
	DECLARE_FUNCTION(execGetLevelsDev); \
	DECLARE_FUNCTION(execGetLevelsFeature); \
	DECLARE_FUNCTION(execGetLevelsTutorial); \
	DECLARE_FUNCTION(execIsLevelIdxValid); \
	DECLARE_FUNCTION(execLevelIdxToPath); \
	DECLARE_FUNCTION(execLevelPathToIdx); \
	DECLARE_FUNCTION(execLevelShortNameToIdx);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeistCollections); \
	DECLARE_FUNCTION(execGetLevels); \
	DECLARE_FUNCTION(execGetLevelsDev); \
	DECLARE_FUNCTION(execGetLevelsFeature); \
	DECLARE_FUNCTION(execGetLevelsTutorial); \
	DECLARE_FUNCTION(execIsLevelIdxValid); \
	DECLARE_FUNCTION(execLevelIdxToPath); \
	DECLARE_FUNCTION(execLevelPathToIdx); \
	DECLARE_FUNCTION(execLevelShortNameToIdx);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameStateMachineSettings(); \
	friend struct Z_Construct_UClass_USBZGameStateMachineSettings_Statics; \
public: \
	DECLARE_CLASS(USBZGameStateMachineSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameStateMachineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameStateMachineSettings(); \
	friend struct Z_Construct_UClass_USBZGameStateMachineSettings_Statics; \
public: \
	DECLARE_CLASS(USBZGameStateMachineSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameStateMachineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameStateMachineSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameStateMachineSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameStateMachineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameStateMachineSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameStateMachineSettings(USBZGameStateMachineSettings&&); \
	NO_API USBZGameStateMachineSettings(const USBZGameStateMachineSettings&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameStateMachineSettings(USBZGameStateMachineSettings&&); \
	NO_API USBZGameStateMachineSettings(const USBZGameStateMachineSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameStateMachineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameStateMachineSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameStateMachineSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeistCollections() { return STRUCT_OFFSET(USBZGameStateMachineSettings, HeistCollections); } \
	FORCEINLINE static uint32 __PPO__Levels() { return STRUCT_OFFSET(USBZGameStateMachineSettings, Levels); } \
	FORCEINLINE static uint32 __PPO__LevelsTutorial() { return STRUCT_OFFSET(USBZGameStateMachineSettings, LevelsTutorial); } \
	FORCEINLINE static uint32 __PPO__DeveloperLevels() { return STRUCT_OFFSET(USBZGameStateMachineSettings, DeveloperLevels); } \
	FORCEINLINE static uint32 __PPO__SafeHouseLevel() { return STRUCT_OFFSET(USBZGameStateMachineSettings, SafeHouseLevel); } \
	FORCEINLINE static uint32 __PPO__FeatureLevels() { return STRUCT_OFFSET(USBZGameStateMachineSettings, FeatureLevels); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_23_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameStateMachineSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachineSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
