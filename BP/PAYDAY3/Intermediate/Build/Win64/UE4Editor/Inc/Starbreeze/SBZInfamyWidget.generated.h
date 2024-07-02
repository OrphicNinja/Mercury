// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInfamyManager;
#ifdef STARBREEZE_SBZInfamyWidget_generated_h
#error "SBZInfamyWidget.generated.h already included, missing '#pragma once' in SBZInfamyWidget.h"
#endif
#define STARBREEZE_SBZInfamyWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInfamyAdded); \
	DECLARE_FUNCTION(execRefreshCurrentInfamyData);


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInfamyAdded); \
	DECLARE_FUNCTION(execRefreshCurrentInfamyData);


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInfamyWidget(); \
	friend struct Z_Construct_UClass_USBZInfamyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInfamyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInfamyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInfamyWidget(); \
	friend struct Z_Construct_UClass_USBZInfamyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInfamyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInfamyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInfamyWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInfamyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInfamyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInfamyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInfamyWidget(USBZInfamyWidget&&); \
	NO_API USBZInfamyWidget(const USBZInfamyWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInfamyWidget(USBZInfamyWidget&&); \
	NO_API USBZInfamyWidget(const USBZInfamyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInfamyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInfamyWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInfamyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InfamyLevel() { return STRUCT_OFFSET(USBZInfamyWidget, InfamyLevel); } \
	FORCEINLINE static uint32 __PPO__InfamyExperience() { return STRUCT_OFFSET(USBZInfamyWidget, InfamyExperience); } \
	FORCEINLINE static uint32 __PPO__ExperienceForCurrentLevel() { return STRUCT_OFFSET(USBZInfamyWidget, ExperienceForCurrentLevel); } \
	FORCEINLINE static uint32 __PPO__ExperienceForNextLevel() { return STRUCT_OFFSET(USBZInfamyWidget, ExperienceForNextLevel); } \
	FORCEINLINE static uint32 __PPO__CurrentLevelProgress() { return STRUCT_OFFSET(USBZInfamyWidget, CurrentLevelProgress); } \
	FORCEINLINE static uint32 __PPO__bIsMaxLevel() { return STRUCT_OFFSET(USBZInfamyWidget, bIsMaxLevel); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInfamyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInfamyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
