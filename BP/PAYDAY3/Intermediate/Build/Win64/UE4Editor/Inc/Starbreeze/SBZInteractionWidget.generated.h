// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZPlayerInteractorComponent;
struct FSBZInteractDisplayDataCollection;
#ifdef STARBREEZE_SBZInteractionWidget_generated_h
#error "SBZInteractionWidget.generated.h already included, missing '#pragma once' in SBZInteractionWidget.h"
#endif
#define STARBREEZE_SBZInteractionWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_EVENT_PARMS \
	struct SBZInteractionWidget_eventOnAISeenPlayer_Parms \
	{ \
		bool bIsSeenByAI; \
	}; \
	struct SBZInteractionWidget_eventOnCasingChanged_Parms \
	{ \
		bool bIsCasing; \
	}; \
	struct SBZInteractionWidget_eventOnNewInteractionCollection_Parms \
	{ \
		const USBZPlayerInteractorComponent* Interactor; \
		FSBZInteractDisplayDataCollection NewInteractionCollection; \
	}; \
	struct SBZInteractionWidget_eventOnPlayerIsInteracting_Parms \
	{ \
		const USBZPlayerInteractorComponent* Interactor; \
		bool bIsInteracting; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInteractionWidget(); \
	friend struct Z_Construct_UClass_USBZInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInteractionWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInteractionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInteractionWidget(); \
	friend struct Z_Construct_UClass_USBZInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInteractionWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInteractionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInteractionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInteractionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInteractionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInteractionWidget(USBZInteractionWidget&&); \
	NO_API USBZInteractionWidget(const USBZInteractionWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInteractionWidget(USBZInteractionWidget&&); \
	NO_API USBZInteractionWidget(const USBZInteractionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInteractionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInteractionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInteractionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInteractionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
