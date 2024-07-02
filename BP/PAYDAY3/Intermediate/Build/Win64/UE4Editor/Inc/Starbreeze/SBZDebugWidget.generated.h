// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZDebugWidget_generated_h
#error "SBZDebugWidget.generated.h already included, missing '#pragma once' in SBZDebugWidget.h"
#endif
#define STARBREEZE_SBZDebugWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_EVENT_PARMS \
	struct SBZDebugWidget_eventOnMissionSeedSet_Parms \
	{ \
		int32 MissionSeed; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDebugWidget(); \
	friend struct Z_Construct_UClass_USBZDebugWidget_Statics; \
public: \
	DECLARE_CLASS(USBZDebugWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDebugWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDebugWidget(); \
	friend struct Z_Construct_UClass_USBZDebugWidget_Statics; \
public: \
	DECLARE_CLASS(USBZDebugWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDebugWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDebugWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDebugWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDebugWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDebugWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDebugWidget(USBZDebugWidget&&); \
	NO_API USBZDebugWidget(const USBZDebugWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDebugWidget(USBZDebugWidget&&); \
	NO_API USBZDebugWidget(const USBZDebugWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDebugWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDebugWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZDebugWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_SubtitleText() { return STRUCT_OFFSET(USBZDebugWidget, Text_SubtitleText); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDebugWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDebugWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
