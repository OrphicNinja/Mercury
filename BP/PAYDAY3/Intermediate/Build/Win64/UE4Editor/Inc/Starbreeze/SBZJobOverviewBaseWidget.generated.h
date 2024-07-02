// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerReadyInfo;
class ASBZPlayerState;
#ifdef STARBREEZE_SBZJobOverviewBaseWidget_generated_h
#error "SBZJobOverviewBaseWidget.generated.h already included, missing '#pragma once' in SBZJobOverviewBaseWidget.h"
#endif
#define STARBREEZE_SBZJobOverviewBaseWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerReadyStatusUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerReadyStatusUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_EVENT_PARMS \
	struct SBZJobOverviewBaseWidget_eventBP_OnIntroSequenceChanged_Parms \
	{ \
		bool bIsStarted; \
	}; \
	struct SBZJobOverviewBaseWidget_eventBP_OnPlayerStateCountChanged_Parms \
	{ \
		ASBZPlayerState* PlayerState; \
	}; \
	struct SBZJobOverviewBaseWidget_eventBP_OnPlayerStateSkipIntroSequenceChanged_Parms \
	{ \
		ASBZPlayerState* PlayerState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZJobOverviewBaseWidget(); \
	friend struct Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZJobOverviewBaseWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZJobOverviewBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZJobOverviewBaseWidget(); \
	friend struct Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZJobOverviewBaseWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZJobOverviewBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZJobOverviewBaseWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZJobOverviewBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZJobOverviewBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZJobOverviewBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZJobOverviewBaseWidget(USBZJobOverviewBaseWidget&&); \
	NO_API USBZJobOverviewBaseWidget(const USBZJobOverviewBaseWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZJobOverviewBaseWidget(USBZJobOverviewBaseWidget&&); \
	NO_API USBZJobOverviewBaseWidget(const USBZJobOverviewBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZJobOverviewBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZJobOverviewBaseWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZJobOverviewBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerStatusWidgetClass() { return STRUCT_OFFSET(USBZJobOverviewBaseWidget, PlayerStatusWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Panel_PartyWidgetContainer() { return STRUCT_OFFSET(USBZJobOverviewBaseWidget, Panel_PartyWidgetContainer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZJobOverviewBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
