// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
struct FSBZChallengeProgressItem;
struct FSBZChallengeProgressStat;
#ifdef STARBREEZE_SBZMainMenuChallengeStatDisplay_generated_h
#error "SBZMainMenuChallengeStatDisplay.generated.h already included, missing '#pragma once' in SBZMainMenuChallengeStatDisplay.h"
#endif
#define STARBREEZE_SBZMainMenuChallengeStatDisplay_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_EVENT_PARMS \
	struct SBZMainMenuChallengeStatDisplay_eventChallengeIdInitialized_Parms \
	{ \
		FString InChallengeId; \
	}; \
	struct SBZMainMenuChallengeStatDisplay_eventChallengeInitialized_Parms \
	{ \
		FSBZChallengeData InChallenge; \
	}; \
	struct SBZMainMenuChallengeStatDisplay_eventItemInitialized_Parms \
	{ \
		FSBZChallengeProgressItem InProgressItem; \
	}; \
	struct SBZMainMenuChallengeStatDisplay_eventStatInitialized_Parms \
	{ \
		FSBZChallengeData InChallenge; \
		FSBZChallengeProgressStat InProgressStat; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuChallengeStatDisplay(); \
	friend struct Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuChallengeStatDisplay, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuChallengeStatDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuChallengeStatDisplay(); \
	friend struct Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuChallengeStatDisplay, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuChallengeStatDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuChallengeStatDisplay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuChallengeStatDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuChallengeStatDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuChallengeStatDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuChallengeStatDisplay(USBZMainMenuChallengeStatDisplay&&); \
	NO_API USBZMainMenuChallengeStatDisplay(const USBZMainMenuChallengeStatDisplay&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuChallengeStatDisplay(USBZMainMenuChallengeStatDisplay&&); \
	NO_API USBZMainMenuChallengeStatDisplay(const USBZMainMenuChallengeStatDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuChallengeStatDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuChallengeStatDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuChallengeStatDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuChallengeStatDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeStatDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
