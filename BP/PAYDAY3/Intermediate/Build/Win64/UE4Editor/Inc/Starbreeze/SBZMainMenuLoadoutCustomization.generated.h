// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMainMenuLoadoutCustomization_generated_h
#error "SBZMainMenuLoadoutCustomization.generated.h already included, missing '#pragma once' in SBZMainMenuLoadoutCustomization.h"
#endif
#define STARBREEZE_SBZMainMenuLoadoutCustomization_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomizeLoadout); \
	DECLARE_FUNCTION(execSaveCachedLoadout);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomizeLoadout); \
	DECLARE_FUNCTION(execSaveCachedLoadout);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutCustomization(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutCustomization, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutCustomization)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutCustomization(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutCustomization, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutCustomization)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuLoadoutCustomization(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuLoadoutCustomization) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutCustomization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutCustomization); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutCustomization(USBZMainMenuLoadoutCustomization&&); \
	NO_API USBZMainMenuLoadoutCustomization(const USBZMainMenuLoadoutCustomization&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutCustomization(USBZMainMenuLoadoutCustomization&&); \
	NO_API USBZMainMenuLoadoutCustomization(const USBZMainMenuLoadoutCustomization&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutCustomization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutCustomization); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuLoadoutCustomization)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedPlayerLoadoutConfig() { return STRUCT_OFFSET(USBZMainMenuLoadoutCustomization, CachedPlayerLoadoutConfig); } \
	FORCEINLINE static uint32 __PPO__LoadoutIndex() { return STRUCT_OFFSET(USBZMainMenuLoadoutCustomization, LoadoutIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuLoadoutCustomization>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutCustomization_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
