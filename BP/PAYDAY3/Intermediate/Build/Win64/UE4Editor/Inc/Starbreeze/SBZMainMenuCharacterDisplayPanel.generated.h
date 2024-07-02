// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZPlayerCharacterData;
#ifdef STARBREEZE_SBZMainMenuCharacterDisplayPanel_generated_h
#error "SBZMainMenuCharacterDisplayPanel.generated.h already included, missing '#pragma once' in SBZMainMenuCharacterDisplayPanel.h"
#endif
#define STARBREEZE_SBZMainMenuCharacterDisplayPanel_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCharacterToDisplay); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCharacterToDisplay); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_EVENT_PARMS \
	struct SBZMainMenuCharacterDisplayPanel_eventOnCharacterDataChanged_Parms \
	{ \
		const USBZPlayerCharacterData* InCharacterData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCharacterDisplayPanel(); \
	friend struct Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCharacterDisplayPanel, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCharacterDisplayPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCharacterDisplayPanel(); \
	friend struct Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCharacterDisplayPanel, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCharacterDisplayPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCharacterDisplayPanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCharacterDisplayPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCharacterDisplayPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCharacterDisplayPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCharacterDisplayPanel(USBZMainMenuCharacterDisplayPanel&&); \
	NO_API USBZMainMenuCharacterDisplayPanel(const USBZMainMenuCharacterDisplayPanel&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCharacterDisplayPanel(USBZMainMenuCharacterDisplayPanel&&); \
	NO_API USBZMainMenuCharacterDisplayPanel(const USBZMainMenuCharacterDisplayPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCharacterDisplayPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCharacterDisplayPanel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCharacterDisplayPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterData() { return STRUCT_OFFSET(USBZMainMenuCharacterDisplayPanel, CharacterData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCharacterDisplayPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCharacterDisplayPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
