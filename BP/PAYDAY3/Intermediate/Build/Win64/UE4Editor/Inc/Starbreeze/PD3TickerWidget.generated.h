// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
struct FLinearColor;
#ifdef STARBREEZE_PD3TickerWidget_generated_h
#error "PD3TickerWidget.generated.h already included, missing '#pragma once' in PD3TickerWidget.h"
#endif
#define STARBREEZE_PD3TickerWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_EVENT_PARMS \
	struct PD3TickerWidget_eventOnTickerModeChanged_Parms \
	{ \
		FText Text; \
		FLinearColor TextColor; \
		FLinearColor BackgroundColor; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3TickerWidget(); \
	friend struct Z_Construct_UClass_UPD3TickerWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3TickerWidget, USBZPawnWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3TickerWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPD3TickerWidget(); \
	friend struct Z_Construct_UClass_UPD3TickerWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3TickerWidget, USBZPawnWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3TickerWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3TickerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3TickerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3TickerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3TickerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3TickerWidget(UPD3TickerWidget&&); \
	NO_API UPD3TickerWidget(const UPD3TickerWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3TickerWidget(UPD3TickerWidget&&); \
	NO_API UPD3TickerWidget(const UPD3TickerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3TickerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3TickerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3TickerWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShowAnimation() { return STRUCT_OFFSET(UPD3TickerWidget, ShowAnimation); } \
	FORCEINLINE static uint32 __PPO__HideAnimation() { return STRUCT_OFFSET(UPD3TickerWidget, HideAnimation); } \
	FORCEINLINE static uint32 __PPO__TickerSettings() { return STRUCT_OFFSET(UPD3TickerWidget, TickerSettings); } \
	FORCEINLINE static uint32 __PPO__Prefix() { return STRUCT_OFFSET(UPD3TickerWidget, Prefix); } \
	FORCEINLINE static uint32 __PPO__Postfix() { return STRUCT_OFFSET(UPD3TickerWidget, Postfix); }


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3TickerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3TickerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
