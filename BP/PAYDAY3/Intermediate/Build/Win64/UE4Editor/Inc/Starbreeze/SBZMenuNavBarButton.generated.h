// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZNavButtonParameters;
#ifdef STARBREEZE_SBZMenuNavBarButton_generated_h
#error "SBZMenuNavBarButton.generated.h already included, missing '#pragma once' in SBZMenuNavBarButton.h"
#endif
#define STARBREEZE_SBZMenuNavBarButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_EVENT_PARMS \
	struct SBZMenuNavBarButton_eventOnButtonInitialized_Parms \
	{ \
		FSBZNavButtonParameters ButtonParams; \
	}; \
	struct SBZMenuNavBarButton_eventOnHovered_Parms \
	{ \
		bool bIsHovered; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuNavBarButton(); \
	friend struct Z_Construct_UClass_USBZMenuNavBarButton_Statics; \
public: \
	DECLARE_CLASS(USBZMenuNavBarButton, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuNavBarButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuNavBarButton(); \
	friend struct Z_Construct_UClass_USBZMenuNavBarButton_Statics; \
public: \
	DECLARE_CLASS(USBZMenuNavBarButton, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuNavBarButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuNavBarButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuNavBarButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuNavBarButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuNavBarButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuNavBarButton(USBZMenuNavBarButton&&); \
	NO_API USBZMenuNavBarButton(const USBZMenuNavBarButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuNavBarButton(USBZMenuNavBarButton&&); \
	NO_API USBZMenuNavBarButton(const USBZMenuNavBarButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuNavBarButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuNavBarButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuNavBarButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_ButtonDisplayText() { return STRUCT_OFFSET(USBZMenuNavBarButton, Text_ButtonDisplayText); } \
	FORCEINLINE static uint32 __PPO__OwningNavBar() { return STRUCT_OFFSET(USBZMenuNavBarButton, OwningNavBar); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuNavBarButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBarButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
