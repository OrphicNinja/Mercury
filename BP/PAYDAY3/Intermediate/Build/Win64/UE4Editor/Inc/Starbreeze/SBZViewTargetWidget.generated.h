// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCameraState : uint8;
#ifdef STARBREEZE_SBZViewTargetWidget_generated_h
#error "SBZViewTargetWidget.generated.h already included, missing '#pragma once' in SBZViewTargetWidget.h"
#endif
#define STARBREEZE_SBZViewTargetWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSecurityCameraRuntimeStateChanged); \
	DECLARE_FUNCTION(execOnSecurityCameraStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSecurityCameraRuntimeStateChanged); \
	DECLARE_FUNCTION(execOnSecurityCameraStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_EVENT_PARMS \
	struct SBZViewTargetWidget_eventOnFocusedChanged_Parms \
	{ \
		bool bIsFocused; \
	}; \
	struct SBZViewTargetWidget_eventSecurityCameraRuntimeStateChanged_Parms \
	{ \
		uint8 NewState; \
	}; \
	struct SBZViewTargetWidget_eventSecurityCameraStateChanged_Parms \
	{ \
		ESBZCameraState CurrentState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZViewTargetWidget(); \
	friend struct Z_Construct_UClass_USBZViewTargetWidget_Statics; \
public: \
	DECLARE_CLASS(USBZViewTargetWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZViewTargetWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZViewTargetWidget(); \
	friend struct Z_Construct_UClass_USBZViewTargetWidget_Statics; \
public: \
	DECLARE_CLASS(USBZViewTargetWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZViewTargetWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZViewTargetWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZViewTargetWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZViewTargetWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZViewTargetWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZViewTargetWidget(USBZViewTargetWidget&&); \
	NO_API USBZViewTargetWidget(const USBZViewTargetWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZViewTargetWidget(USBZViewTargetWidget&&); \
	NO_API USBZViewTargetWidget(const USBZViewTargetWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZViewTargetWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZViewTargetWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZViewTargetWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ViewTargetActor() { return STRUCT_OFFSET(USBZViewTargetWidget, ViewTargetActor); }


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZViewTargetWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZViewTargetWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
