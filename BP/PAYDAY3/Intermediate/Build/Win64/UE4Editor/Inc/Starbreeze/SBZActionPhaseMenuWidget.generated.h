// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZActionPhaseMenuWidget_generated_h
#error "SBZActionPhaseMenuWidget.generated.h already included, missing '#pragma once' in SBZActionPhaseMenuWidget.h"
#endif
#define STARBREEZE_SBZActionPhaseMenuWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleShowMenu);


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleShowMenu);


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_EVENT_PARMS \
	struct SBZActionPhaseMenuWidget_eventOnMenuShown_Parms \
	{ \
		bool bIsShown; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZActionPhaseMenuWidget(); \
	friend struct Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USBZActionPhaseMenuWidget, USBZBaseMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActionPhaseMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZActionPhaseMenuWidget(); \
	friend struct Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USBZActionPhaseMenuWidget, USBZBaseMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActionPhaseMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZActionPhaseMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActionPhaseMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActionPhaseMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActionPhaseMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActionPhaseMenuWidget(USBZActionPhaseMenuWidget&&); \
	NO_API USBZActionPhaseMenuWidget(const USBZActionPhaseMenuWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActionPhaseMenuWidget(USBZActionPhaseMenuWidget&&); \
	NO_API USBZActionPhaseMenuWidget(const USBZActionPhaseMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActionPhaseMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActionPhaseMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZActionPhaseMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_NavBar() { return STRUCT_OFFSET(USBZActionPhaseMenuWidget, Widget_NavBar); } \
	FORCEINLINE static uint32 __PPO__MenuStackValue() { return STRUCT_OFFSET(USBZActionPhaseMenuWidget, MenuStackValue); } \
	FORCEINLINE static uint32 __PPO__bIsMenuShown() { return STRUCT_OFFSET(USBZActionPhaseMenuWidget, bIsMenuShown); }


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZActionPhaseMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
