// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerInEscapeChangedEvent;
#ifdef STARBREEZE_PD3HUDEscapeVolumeWidget_generated_h
#error "PD3HUDEscapeVolumeWidget.generated.h already included, missing '#pragma once' in PD3HUDEscapeVolumeWidget.h"
#endif
#define STARBREEZE_PD3HUDEscapeVolumeWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayersInEscapeChangedEvent);


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayersInEscapeChangedEvent);


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_EVENT_PARMS \
	struct PD3HUDEscapeVolumeWidget_eventOnAllPlayersLeftVolume_Parms \
	{ \
		int32 PlayersInVolumeOnLeft; \
		int32 TotalPlayers; \
	}; \
	struct PD3HUDEscapeVolumeWidget_eventOnEscapeTimerChanged_Parms \
	{ \
		int32 NewTime; \
	}; \
	struct PD3HUDEscapeVolumeWidget_eventOnPlayerCountChanged_Parms \
	{ \
		int32 PlayersInVolumeOnChanged; \
		int32 TotalPlayers; \
	}; \
	struct PD3HUDEscapeVolumeWidget_eventOnPlayersEnteredVolume_Parms \
	{ \
		int32 PlayersInVolumeOnEntered; \
		int32 TotalPlayers; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDEscapeVolumeWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDEscapeVolumeWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDEscapeVolumeWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDEscapeVolumeWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDEscapeVolumeWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDEscapeVolumeWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDEscapeVolumeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDEscapeVolumeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDEscapeVolumeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDEscapeVolumeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDEscapeVolumeWidget(UPD3HUDEscapeVolumeWidget&&); \
	NO_API UPD3HUDEscapeVolumeWidget(const UPD3HUDEscapeVolumeWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDEscapeVolumeWidget(UPD3HUDEscapeVolumeWidget&&); \
	NO_API UPD3HUDEscapeVolumeWidget(const UPD3HUDEscapeVolumeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDEscapeVolumeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDEscapeVolumeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDEscapeVolumeWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDEscapeVolumeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDEscapeVolumeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
