// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPingQuality : uint8;
#ifdef STARBREEZE_SBZPingWidget_generated_h
#error "SBZPingWidget.generated.h already included, missing '#pragma once' in SBZPingWidget.h"
#endif
#define STARBREEZE_SBZPingWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_EVENT_PARMS \
	struct SBZPingWidget_eventOnPingQualityChanged_Parms \
	{ \
		EPingQuality PingQuality; \
	}; \
	struct SBZPingWidget_eventOnPingValueChanged_Parms \
	{ \
		int32 PingValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPingWidget(); \
	friend struct Z_Construct_UClass_USBZPingWidget_Statics; \
public: \
	DECLARE_CLASS(USBZPingWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPingWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPingWidget(); \
	friend struct Z_Construct_UClass_USBZPingWidget_Statics; \
public: \
	DECLARE_CLASS(USBZPingWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPingWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPingWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPingWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPingWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPingWidget(USBZPingWidget&&); \
	NO_API USBZPingWidget(const USBZPingWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPingWidget(USBZPingWidget&&); \
	NO_API USBZPingWidget(const USBZPingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPingWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPingWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenUpdates() { return STRUCT_OFFSET(USBZPingWidget, TimeBetweenUpdates); } \
	FORCEINLINE static uint32 __PPO__HighThreshold() { return STRUCT_OFFSET(USBZPingWidget, HighThreshold); } \
	FORCEINLINE static uint32 __PPO__CriticalThreshold() { return STRUCT_OFFSET(USBZPingWidget, CriticalThreshold); } \
	FORCEINLINE static uint32 __PPO__PlayerState() { return STRUCT_OFFSET(USBZPingWidget, PlayerState); } \
	FORCEINLINE static uint32 __PPO__bIsPingAllowed() { return STRUCT_OFFSET(USBZPingWidget, bIsPingAllowed); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPingWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
