// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeRewardItem;
#ifdef STARBREEZE_SBZMainMenuItemRewardDisplay_generated_h
#error "SBZMainMenuItemRewardDisplay.generated.h already included, missing '#pragma once' in SBZMainMenuItemRewardDisplay.h"
#endif
#define STARBREEZE_SBZMainMenuItemRewardDisplay_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_EVENT_PARMS \
	struct SBZMainMenuItemRewardDisplay_eventInfamyInitialized_Parms \
	{ \
		int32 InfamyPoints; \
	}; \
	struct SBZMainMenuItemRewardDisplay_eventItemInitialized_Parms \
	{ \
		FSBZChallengeRewardItem InRewardItem; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemRewardDisplay(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemRewardDisplay, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemRewardDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemRewardDisplay(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemRewardDisplay, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemRewardDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuItemRewardDisplay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuItemRewardDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemRewardDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemRewardDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemRewardDisplay(USBZMainMenuItemRewardDisplay&&); \
	NO_API USBZMainMenuItemRewardDisplay(const USBZMainMenuItemRewardDisplay&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemRewardDisplay(USBZMainMenuItemRewardDisplay&&); \
	NO_API USBZMainMenuItemRewardDisplay(const USBZMainMenuItemRewardDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemRewardDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemRewardDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuItemRewardDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuItemRewardDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemRewardDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
