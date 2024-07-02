// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSubtitleWidget_generated_h
#error "SBZSubtitleWidget.generated.h already included, missing '#pragma once' in SBZSubtitleWidget.h"
#endif
#define STARBREEZE_SBZSubtitleWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePlayerControllerInitialized);


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerControllerInitialized);


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSubtitleWidget(); \
	friend struct Z_Construct_UClass_USBZSubtitleWidget_Statics; \
public: \
	DECLARE_CLASS(USBZSubtitleWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSubtitleWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSubtitleWidget(); \
	friend struct Z_Construct_UClass_USBZSubtitleWidget_Statics; \
public: \
	DECLARE_CLASS(USBZSubtitleWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSubtitleWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSubtitleWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSubtitleWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSubtitleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSubtitleWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSubtitleWidget(USBZSubtitleWidget&&); \
	NO_API USBZSubtitleWidget(const USBZSubtitleWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSubtitleWidget(USBZSubtitleWidget&&); \
	NO_API USBZSubtitleWidget(const USBZSubtitleWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSubtitleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSubtitleWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSubtitleWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinDisplayTime() { return STRUCT_OFFSET(USBZSubtitleWidget, MinDisplayTime); } \
	FORCEINLINE static uint32 __PPO__DisplayTimePerCharacter() { return STRUCT_OFFSET(USBZSubtitleWidget, DisplayTimePerCharacter); } \
	FORCEINLINE static uint32 __PPO__bSettingsPreview() { return STRUCT_OFFSET(USBZSubtitleWidget, bSettingsPreview); } \
	FORCEINLINE static uint32 __PPO__DisplayTimePerCharacterMap() { return STRUCT_OFFSET(USBZSubtitleWidget, DisplayTimePerCharacterMap); } \
	FORCEINLINE static uint32 __PPO__StringTableName() { return STRUCT_OFFSET(USBZSubtitleWidget, StringTableName); } \
	FORCEINLINE static uint32 __PPO__VOStringTableName() { return STRUCT_OFFSET(USBZSubtitleWidget, VOStringTableName); } \
	FORCEINLINE static uint32 __PPO__Text_SubtitleText() { return STRUCT_OFFSET(USBZSubtitleWidget, Text_SubtitleText); } \
	FORCEINLINE static uint32 __PPO__SubtitleStringTable() { return STRUCT_OFFSET(USBZSubtitleWidget, SubtitleStringTable); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSubtitleWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSubtitleWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
