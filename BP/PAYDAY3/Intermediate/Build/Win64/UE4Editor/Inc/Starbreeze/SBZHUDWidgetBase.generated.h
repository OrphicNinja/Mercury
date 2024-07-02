// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef STARBREEZE_SBZHUDWidgetBase_generated_h
#error "SBZHUDWidgetBase.generated.h already included, missing '#pragma once' in SBZHUDWidgetBase.h"
#endif
#define STARBREEZE_SBZHUDWidgetBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasRequiredTags); \
	DECLARE_FUNCTION(execOnUITagsChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasRequiredTags); \
	DECLARE_FUNCTION(execOnUITagsChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_EVENT_PARMS \
	struct SBZHUDWidgetBase_eventOnWidgetRequiresUITagsChanged_Parms \
	{ \
		bool bInHasRequiredTags; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHUDWidgetBase(); \
	friend struct Z_Construct_UClass_USBZHUDWidgetBase_Statics; \
public: \
	DECLARE_CLASS(USBZHUDWidgetBase, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHUDWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHUDWidgetBase(); \
	friend struct Z_Construct_UClass_USBZHUDWidgetBase_Statics; \
public: \
	DECLARE_CLASS(USBZHUDWidgetBase, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHUDWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHUDWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHUDWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHUDWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHUDWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHUDWidgetBase(USBZHUDWidgetBase&&); \
	NO_API USBZHUDWidgetBase(const USBZHUDWidgetBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHUDWidgetBase(USBZHUDWidgetBase&&); \
	NO_API USBZHUDWidgetBase(const USBZHUDWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHUDWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHUDWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHUDWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequiredDisplayTags() { return STRUCT_OFFSET(USBZHUDWidgetBase, RequiredDisplayTags); } \
	FORCEINLINE static uint32 __PPO__bHasRequiredTags() { return STRUCT_OFFSET(USBZHUDWidgetBase, bHasRequiredTags); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHUDWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHUDWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
