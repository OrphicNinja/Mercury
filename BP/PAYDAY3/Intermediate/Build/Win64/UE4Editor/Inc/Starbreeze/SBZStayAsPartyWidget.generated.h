// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerState;
#ifdef STARBREEZE_SBZStayAsPartyWidget_generated_h
#error "SBZStayAsPartyWidget.generated.h already included, missing '#pragma once' in SBZStayAsPartyWidget.h"
#endif
#define STARBREEZE_SBZStayAsPartyWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRestartAcceptTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartCountdownTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartExpireTimerUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRestartAcceptTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartCountdownTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartExpireTimerUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_EVENT_PARMS \
	struct SBZStayAsPartyWidget_eventOnInitialTimerStarted_Parms \
	{ \
		float InNewTime; \
	}; \
	struct SBZStayAsPartyWidget_eventOnMergePartyUpdated_Parms \
	{ \
		FString PlayerDisplayName; \
		bool bIsMergePartySelected; \
	}; \
	struct SBZStayAsPartyWidget_eventOnRestartAcceptTimerStarted_Parms \
	{ \
		float InNewTime; \
	}; \
	struct SBZStayAsPartyWidget_eventOnRestartStarted_Parms \
	{ \
		float InNewTime; \
	}; \
	struct SBZStayAsPartyWidget_eventOnSetup_Parms \
	{ \
		TArray<ASBZPlayerState*> PlayerStateArray; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStayAsPartyWidget(); \
	friend struct Z_Construct_UClass_USBZStayAsPartyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZStayAsPartyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStayAsPartyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStayAsPartyWidget(); \
	friend struct Z_Construct_UClass_USBZStayAsPartyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZStayAsPartyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStayAsPartyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStayAsPartyWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStayAsPartyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStayAsPartyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStayAsPartyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStayAsPartyWidget(USBZStayAsPartyWidget&&); \
	NO_API USBZStayAsPartyWidget(const USBZStayAsPartyWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStayAsPartyWidget(USBZStayAsPartyWidget&&); \
	NO_API USBZStayAsPartyWidget(const USBZStayAsPartyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStayAsPartyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStayAsPartyWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStayAsPartyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStayAsPartyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStayAsPartyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
