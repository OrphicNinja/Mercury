// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZVendorData;
#ifdef STARBREEZE_SBZBlackMarketVendorButton_generated_h
#error "SBZBlackMarketVendorButton.generated.h already included, missing '#pragma once' in SBZBlackMarketVendorButton.h"
#endif
#define STARBREEZE_SBZBlackMarketVendorButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVendorData); \
	DECLARE_FUNCTION(execInitializeVendorData); \
	DECLARE_FUNCTION(execSetActiveVendor);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVendorData); \
	DECLARE_FUNCTION(execInitializeVendorData); \
	DECLARE_FUNCTION(execSetActiveVendor);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_EVENT_PARMS \
	struct SBZBlackMarketVendorButton_eventOnActiveVendorSet_Parms \
	{ \
		bool bInIsActiveVendor; \
	}; \
	struct SBZBlackMarketVendorButton_eventOnVendorDataInitialized_Parms \
	{ \
		const USBZVendorData* InVendorData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketVendorButton(); \
	friend struct Z_Construct_UClass_USBZBlackMarketVendorButton_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketVendorButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketVendorButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketVendorButton(); \
	friend struct Z_Construct_UClass_USBZBlackMarketVendorButton_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketVendorButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketVendorButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBlackMarketVendorButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBlackMarketVendorButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketVendorButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketVendorButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketVendorButton(USBZBlackMarketVendorButton&&); \
	NO_API USBZBlackMarketVendorButton(const USBZBlackMarketVendorButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketVendorButton(USBZBlackMarketVendorButton&&); \
	NO_API USBZBlackMarketVendorButton(const USBZBlackMarketVendorButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketVendorButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketVendorButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBlackMarketVendorButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VendorData() { return STRUCT_OFFSET(USBZBlackMarketVendorButton, VendorData); } \
	FORCEINLINE static uint32 __PPO__bIsActiveVendor() { return STRUCT_OFFSET(USBZBlackMarketVendorButton, bIsActiveVendor); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBlackMarketVendorButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
