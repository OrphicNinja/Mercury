// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
enum class ESBZServiceStatus : uint8;
#ifdef STARBREEZE_SBZGameErrorWidget_generated_h
#error "SBZGameErrorWidget.generated.h already included, missing '#pragma once' in SBZGameErrorWidget.h"
#endif
#define STARBREEZE_SBZGameErrorWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetButton_ReturnToMainMenu); \
	DECLARE_FUNCTION(execGetErrorHeader); \
	DECLARE_FUNCTION(execGetErrorText); \
	DECLARE_FUNCTION(execSetInternetConnected);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetButton_ReturnToMainMenu); \
	DECLARE_FUNCTION(execGetErrorHeader); \
	DECLARE_FUNCTION(execGetErrorText); \
	DECLARE_FUNCTION(execSetInternetConnected);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameErrorWidget(); \
	friend struct Z_Construct_UClass_USBZGameErrorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZGameErrorWidget, USBZInternetStatusWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameErrorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameErrorWidget(); \
	friend struct Z_Construct_UClass_USBZGameErrorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZGameErrorWidget, USBZInternetStatusWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameErrorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameErrorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameErrorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameErrorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameErrorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameErrorWidget(USBZGameErrorWidget&&); \
	NO_API USBZGameErrorWidget(const USBZGameErrorWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameErrorWidget(USBZGameErrorWidget&&); \
	NO_API USBZGameErrorWidget(const USBZGameErrorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameErrorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameErrorWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameErrorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_ReturnToMainMenu() { return STRUCT_OFFSET(USBZGameErrorWidget, Button_ReturnToMainMenu); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameErrorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameErrorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
