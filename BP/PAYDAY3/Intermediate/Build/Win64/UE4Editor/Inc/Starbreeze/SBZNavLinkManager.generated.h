// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZNavLinkManager;
#ifdef STARBREEZE_SBZNavLinkManager_generated_h
#error "SBZNavLinkManager.generated.h already included, missing '#pragma once' in SBZNavLinkManager.h"
#endif
#define STARBREEZE_SBZNavLinkManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZNavLinkManager(); \
	friend struct Z_Construct_UClass_USBZNavLinkManager_Statics; \
public: \
	DECLARE_CLASS(USBZNavLinkManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNavLinkManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZNavLinkManager(); \
	friend struct Z_Construct_UClass_USBZNavLinkManager_Statics; \
public: \
	DECLARE_CLASS(USBZNavLinkManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNavLinkManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZNavLinkManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNavLinkManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNavLinkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNavLinkManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNavLinkManager(USBZNavLinkManager&&); \
	NO_API USBZNavLinkManager(const USBZNavLinkManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNavLinkManager(USBZNavLinkManager&&); \
	NO_API USBZNavLinkManager(const USBZNavLinkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNavLinkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNavLinkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZNavLinkManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PointRadius() { return STRUCT_OFFSET(USBZNavLinkManager, PointRadius); } \
	FORCEINLINE static uint32 __PPO__MaxNavLinkChecksPerFrame() { return STRUCT_OFFSET(USBZNavLinkManager, MaxNavLinkChecksPerFrame); } \
	FORCEINLINE static uint32 __PPO__CachedNavLinkPoints() { return STRUCT_OFFSET(USBZNavLinkManager, CachedNavLinkPoints); }


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZNavLinkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZNavLinkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
