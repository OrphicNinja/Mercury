// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSBZOnlinePartyParamsUi;
class USBZSessionHostPartyCallbackProxy;
#ifdef STARBREEZE_SBZSessionHostPartyCallbackProxy_generated_h
#error "SBZSessionHostPartyCallbackProxy.generated.h already included, missing '#pragma once' in SBZSessionHostPartyCallbackProxy.h"
#endif
#define STARBREEZE_SBZSessionHostPartyCallbackProxy_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSessionHostParty);


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSessionHostParty);


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSessionHostPartyCallbackProxy(); \
	friend struct Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USBZSessionHostPartyCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSessionHostPartyCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSessionHostPartyCallbackProxy(); \
	friend struct Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USBZSessionHostPartyCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSessionHostPartyCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSessionHostPartyCallbackProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSessionHostPartyCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSessionHostPartyCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSessionHostPartyCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSessionHostPartyCallbackProxy(USBZSessionHostPartyCallbackProxy&&); \
	NO_API USBZSessionHostPartyCallbackProxy(const USBZSessionHostPartyCallbackProxy&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSessionHostPartyCallbackProxy(USBZSessionHostPartyCallbackProxy&&); \
	NO_API USBZSessionHostPartyCallbackProxy(const USBZSessionHostPartyCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSessionHostPartyCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSessionHostPartyCallbackProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSessionHostPartyCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldContextObject() { return STRUCT_OFFSET(USBZSessionHostPartyCallbackProxy, WorldContextObject); } \
	FORCEINLINE static uint32 __PPO__PartyParams() { return STRUCT_OFFSET(USBZSessionHostPartyCallbackProxy, PartyParams); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSessionHostPartyCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSessionHostPartyCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
