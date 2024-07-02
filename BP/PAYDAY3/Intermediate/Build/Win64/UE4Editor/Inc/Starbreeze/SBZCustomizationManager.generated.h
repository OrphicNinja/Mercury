// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ASBZCustomizationManager;
class USBZMaskData;
struct FSBZMaskConfig;
#ifdef STARBREEZE_SBZCustomizationManager_generated_h
#error "SBZCustomizationManager.generated.h already included, missing '#pragma once' in SBZCustomizationManager.h"
#endif
#define STARBREEZE_SBZCustomizationManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCustomizationManager); \
	DECLARE_FUNCTION(execGetMainMenuMannequinVisibility); \
	DECLARE_FUNCTION(execHideCustomizableMannequin); \
	DECLARE_FUNCTION(execHideGlobalMask); \
	DECLARE_FUNCTION(execHideMainMenuMannequin); \
	DECLARE_FUNCTION(execSetMainMenuMannequinRotationEnabled); \
	DECLARE_FUNCTION(execShowCustomizableMannequin); \
	DECLARE_FUNCTION(execShowCustomizableWeapon); \
	DECLARE_FUNCTION(execShowGlobalMask); \
	DECLARE_FUNCTION(execShowMainMenuMannequin); \
	DECLARE_FUNCTION(execSpawnGlobalMask); \
	DECLARE_FUNCTION(execSpawnGlobalMaskWithConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCustomizationManager); \
	DECLARE_FUNCTION(execGetMainMenuMannequinVisibility); \
	DECLARE_FUNCTION(execHideCustomizableMannequin); \
	DECLARE_FUNCTION(execHideGlobalMask); \
	DECLARE_FUNCTION(execHideMainMenuMannequin); \
	DECLARE_FUNCTION(execSetMainMenuMannequinRotationEnabled); \
	DECLARE_FUNCTION(execShowCustomizableMannequin); \
	DECLARE_FUNCTION(execShowCustomizableWeapon); \
	DECLARE_FUNCTION(execShowGlobalMask); \
	DECLARE_FUNCTION(execShowMainMenuMannequin); \
	DECLARE_FUNCTION(execSpawnGlobalMask); \
	DECLARE_FUNCTION(execSpawnGlobalMaskWithConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCustomizationManager(); \
	friend struct Z_Construct_UClass_ASBZCustomizationManager_Statics; \
public: \
	DECLARE_CLASS(ASBZCustomizationManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCustomizationManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZCustomizationManager(); \
	friend struct Z_Construct_UClass_ASBZCustomizationManager_Statics; \
public: \
	DECLARE_CLASS(ASBZCustomizationManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCustomizationManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCustomizationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCustomizationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCustomizationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCustomizationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCustomizationManager(ASBZCustomizationManager&&); \
	NO_API ASBZCustomizationManager(const ASBZCustomizationManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCustomizationManager(ASBZCustomizationManager&&); \
	NO_API ASBZCustomizationManager(const ASBZCustomizationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCustomizationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCustomizationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCustomizationManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GlobalMask() { return STRUCT_OFFSET(ASBZCustomizationManager, GlobalMask); } \
	FORCEINLINE static uint32 __PPO__Mannequin() { return STRUCT_OFFSET(ASBZCustomizationManager, Mannequin); } \
	FORCEINLINE static uint32 __PPO__MaskConfig() { return STRUCT_OFFSET(ASBZCustomizationManager, MaskConfig); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCustomizationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCustomizationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
