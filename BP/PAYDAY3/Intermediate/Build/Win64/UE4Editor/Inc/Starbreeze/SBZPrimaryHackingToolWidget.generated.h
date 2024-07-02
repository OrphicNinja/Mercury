// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef STARBREEZE_SBZPrimaryHackingToolWidget_generated_h
#error "SBZPrimaryHackingToolWidget.generated.h already included, missing '#pragma once' in SBZPrimaryHackingToolWidget.h"
#endif
#define STARBREEZE_SBZPrimaryHackingToolWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasTag);


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasTag);


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_EVENT_PARMS \
	struct SBZPrimaryHackingToolWidget_eventOnHackingDistanceToTarget_Parms \
	{ \
		float MaxDistance; \
		float CurrentDistance; \
	}; \
	struct SBZPrimaryHackingToolWidget_eventOnHackingSyncAborted_Parms \
	{ \
		bool bInAlreadySynched; \
	}; \
	struct SBZPrimaryHackingToolWidget_eventOnHackingSyncCompleted_Parms \
	{ \
		bool bAlreadyHacked; \
	}; \
	struct SBZPrimaryHackingToolWidget_eventOnHackingSyncNoAmmo_Parms \
	{ \
		int32 InCost; \
		int32 InCurrent; \
	}; \
	struct SBZPrimaryHackingToolWidget_eventOnHackingSyncProgressChanged_Parms \
	{ \
		float TimeRemaining; \
	}; \
	struct SBZPrimaryHackingToolWidget_eventOnHackinToolEquipped_Parms \
	{ \
		bool bHasUpgrade02; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPrimaryHackingToolWidget(); \
	friend struct Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics; \
public: \
	DECLARE_CLASS(USBZPrimaryHackingToolWidget, USBZPrimaryToolWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPrimaryHackingToolWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPrimaryHackingToolWidget(); \
	friend struct Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics; \
public: \
	DECLARE_CLASS(USBZPrimaryHackingToolWidget, USBZPrimaryToolWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPrimaryHackingToolWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPrimaryHackingToolWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPrimaryHackingToolWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPrimaryHackingToolWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPrimaryHackingToolWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPrimaryHackingToolWidget(USBZPrimaryHackingToolWidget&&); \
	NO_API USBZPrimaryHackingToolWidget(const USBZPrimaryHackingToolWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPrimaryHackingToolWidget(USBZPrimaryHackingToolWidget&&); \
	NO_API USBZPrimaryHackingToolWidget(const USBZPrimaryHackingToolWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPrimaryHackingToolWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPrimaryHackingToolWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPrimaryHackingToolWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPrimaryHackingToolWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPrimaryHackingToolWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
