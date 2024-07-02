// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextBlock;
#ifdef STARBREEZE_SBZNotificationWidget_generated_h
#error "SBZNotificationWidget.generated.h already included, missing '#pragma once' in SBZNotificationWidget.h"
#endif
#define STARBREEZE_SBZNotificationWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNotificationText); \
	DECLARE_FUNCTION(execSetupWidget);


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNotificationText); \
	DECLARE_FUNCTION(execSetupWidget);


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZNotificationWidget(); \
	friend struct Z_Construct_UClass_USBZNotificationWidget_Statics; \
public: \
	DECLARE_CLASS(USBZNotificationWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZNotificationWidget(); \
	friend struct Z_Construct_UClass_USBZNotificationWidget_Statics; \
public: \
	DECLARE_CLASS(USBZNotificationWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZNotificationWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNotificationWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNotificationWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNotificationWidget(USBZNotificationWidget&&); \
	NO_API USBZNotificationWidget(const USBZNotificationWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNotificationWidget(USBZNotificationWidget&&); \
	NO_API USBZNotificationWidget(const USBZNotificationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNotificationWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyText() { return STRUCT_OFFSET(USBZNotificationWidget, BodyText); }


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZNotificationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZNotificationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
