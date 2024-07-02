// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZVoipWidget_generated_h
#error "SBZVoipWidget.generated.h already included, missing '#pragma once' in SBZVoipWidget.h"
#endif
#define STARBREEZE_SBZVoipWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerTalkingChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerTalkingChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_EVENT_PARMS \
	struct SBZVoipWidget_eventOnPlayerTalkingChangedEvent_Parms \
	{ \
		FString PlayerName; \
		bool bPlayerTalking; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVoipWidget(); \
	friend struct Z_Construct_UClass_USBZVoipWidget_Statics; \
public: \
	DECLARE_CLASS(USBZVoipWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVoipWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVoipWidget(); \
	friend struct Z_Construct_UClass_USBZVoipWidget_Statics; \
public: \
	DECLARE_CLASS(USBZVoipWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVoipWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVoipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVoipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVoipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVoipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVoipWidget(USBZVoipWidget&&); \
	NO_API USBZVoipWidget(const USBZVoipWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVoipWidget(USBZVoipWidget&&); \
	NO_API USBZVoipWidget(const USBZVoipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVoipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVoipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVoipWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVoipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVoipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
