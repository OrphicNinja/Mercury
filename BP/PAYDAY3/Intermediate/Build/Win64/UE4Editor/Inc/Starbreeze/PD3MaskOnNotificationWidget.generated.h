// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3MaskOnNotificationWidget_generated_h
#error "PD3MaskOnNotificationWidget.generated.h already included, missing '#pragma once' in PD3MaskOnNotificationWidget.h"
#endif
#define STARBREEZE_PD3MaskOnNotificationWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaskOnProgress);


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaskOnProgress);


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_EVENT_PARMS \
	struct PD3MaskOnNotificationWidget_eventMaskOnChanged_Parms \
	{ \
		bool bInIsPuttingOnMask; \
	}; \
	struct PD3MaskOnNotificationWidget_eventOnProgressChanged_Parms \
	{ \
		float InProgress; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3MaskOnNotificationWidget(); \
	friend struct Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3MaskOnNotificationWidget, USBZPawnWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3MaskOnNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPD3MaskOnNotificationWidget(); \
	friend struct Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3MaskOnNotificationWidget, USBZPawnWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3MaskOnNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3MaskOnNotificationWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3MaskOnNotificationWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3MaskOnNotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3MaskOnNotificationWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3MaskOnNotificationWidget(UPD3MaskOnNotificationWidget&&); \
	NO_API UPD3MaskOnNotificationWidget(const UPD3MaskOnNotificationWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3MaskOnNotificationWidget(UPD3MaskOnNotificationWidget&&); \
	NO_API UPD3MaskOnNotificationWidget(const UPD3MaskOnNotificationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3MaskOnNotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3MaskOnNotificationWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3MaskOnNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsPuttingOnMask() { return STRUCT_OFFSET(UPD3MaskOnNotificationWidget, bIsPuttingOnMask); }


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3MaskOnNotificationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3MaskOnNotificationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
