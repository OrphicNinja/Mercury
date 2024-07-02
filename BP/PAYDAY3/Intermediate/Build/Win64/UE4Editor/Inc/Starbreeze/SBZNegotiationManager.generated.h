// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZNegotiationManager_generated_h
#error "SBZNegotiationManager.generated.h already included, missing '#pragma once' in SBZNegotiationManager.h"
#endif
#define STARBREEZE_SBZNegotiationManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZNegotiationManager(); \
	friend struct Z_Construct_UClass_USBZNegotiationManager_Statics; \
public: \
	DECLARE_CLASS(USBZNegotiationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNegotiationManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZNegotiationManager(); \
	friend struct Z_Construct_UClass_USBZNegotiationManager_Statics; \
public: \
	DECLARE_CLASS(USBZNegotiationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNegotiationManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZNegotiationManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNegotiationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNegotiationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNegotiationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNegotiationManager(USBZNegotiationManager&&); \
	NO_API USBZNegotiationManager(const USBZNegotiationManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNegotiationManager(USBZNegotiationManager&&); \
	NO_API USBZNegotiationManager(const USBZNegotiationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNegotiationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNegotiationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZNegotiationManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EndNegotiationTags() { return STRUCT_OFFSET(USBZNegotiationManager, EndNegotiationTags); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(USBZNegotiationManager, Settings); }


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZNegotiationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZNegotiationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
