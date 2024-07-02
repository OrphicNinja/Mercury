// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZSkill;
struct FSBZPlayerLoadoutConfig;
class USBZSkillLineData;
class USBZSkillLine;
class ASBZPlayerState;
class USBZSkillData;
class UObject;
class USBZSkillManager;
#ifdef STARBREEZE_SBZSkillManager_generated_h
#error "SBZSkillManager.generated.h already included, missing '#pragma once' in SBZSkillManager.h"
#endif
#define STARBREEZE_SBZSkillManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEquipSkill); \
	DECLARE_FUNCTION(execEquipSkills); \
	DECLARE_FUNCTION(execGetEarnedSkillPoints); \
	DECLARE_FUNCTION(execGetMaxProgressLevel); \
	DECLARE_FUNCTION(execGetPlayerSkillLine); \
	DECLARE_FUNCTION(execGetPlayerSkills); \
	DECLARE_FUNCTION(execGetPlayerStatsForSkill); \
	DECLARE_FUNCTION(execGetPlayerStatsForSkillLine); \
	DECLARE_FUNCTION(execGetProgressingSkill); \
	DECLARE_FUNCTION(execGetSkillManager); \
	DECLARE_FUNCTION(execGetSkillPointsFromInfamyExperience); \
	DECLARE_FUNCTION(execGetSkillPointsFromInfamyLevel); \
	DECLARE_FUNCTION(execIsSkillEquippable); \
	DECLARE_FUNCTION(execSetResearchMarkerOnSkillLine); \
	DECLARE_FUNCTION(execUnequipSkill); \
	DECLARE_FUNCTION(execUnequipSkills);


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEquipSkill); \
	DECLARE_FUNCTION(execEquipSkills); \
	DECLARE_FUNCTION(execGetEarnedSkillPoints); \
	DECLARE_FUNCTION(execGetMaxProgressLevel); \
	DECLARE_FUNCTION(execGetPlayerSkillLine); \
	DECLARE_FUNCTION(execGetPlayerSkills); \
	DECLARE_FUNCTION(execGetPlayerStatsForSkill); \
	DECLARE_FUNCTION(execGetPlayerStatsForSkillLine); \
	DECLARE_FUNCTION(execGetProgressingSkill); \
	DECLARE_FUNCTION(execGetSkillManager); \
	DECLARE_FUNCTION(execGetSkillPointsFromInfamyExperience); \
	DECLARE_FUNCTION(execGetSkillPointsFromInfamyLevel); \
	DECLARE_FUNCTION(execIsSkillEquippable); \
	DECLARE_FUNCTION(execSetResearchMarkerOnSkillLine); \
	DECLARE_FUNCTION(execUnequipSkill); \
	DECLARE_FUNCTION(execUnequipSkills);


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSkillManager(); \
	friend struct Z_Construct_UClass_USBZSkillManager_Statics; \
public: \
	DECLARE_CLASS(USBZSkillManager, USBZPlayerStatisticsManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSkillManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSkillManager(); \
	friend struct Z_Construct_UClass_USBZSkillManager_Statics; \
public: \
	DECLARE_CLASS(USBZSkillManager, USBZPlayerStatisticsManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSkillManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSkillManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSkillManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSkillManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSkillManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSkillManager(USBZSkillManager&&); \
	NO_API USBZSkillManager(const USBZSkillManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSkillManager(USBZSkillManager&&); \
	NO_API USBZSkillManager(const USBZSkillManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSkillManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSkillManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSkillManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ModifyingSkillLine() { return STRUCT_OFFSET(USBZSkillManager, ModifyingSkillLine); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSkillManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSkillManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
