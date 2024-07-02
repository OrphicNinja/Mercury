// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSBZOnlineSearchResult;
class USBZSessionJoinCallbackProxy;
#ifdef STARBREEZE_SBZSessionJoinCallbackProxy_generated_h
#error "SBZSessionJoinCallbackProxy.generated.h already included, missing '#pragma once' in SBZSessionJoinCallbackProxy.h"
#endif
#define STARBREEZE_SBZSessionJoinCallbackProxy_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSessionJoin);


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSessionJoin);


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSessionJoinCallbackProxy(); \
	friend struct Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USBZSessionJoinCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSessionJoinCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSessionJoinCallbackProxy(); \
	friend struct Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USBZSessionJoinCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSessionJoinCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSessionJoinCallbackProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSessionJoinCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSessionJoinCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSessionJoinCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSessionJoinCallbackProxy(USBZSessionJoinCallbackProxy&&); \
	NO_API USBZSessionJoinCallbackProxy(const USBZSessionJoinCallbackProxy&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSessionJoinCallbackProxy(USBZSessionJoinCallbackProxy&&); \
	NO_API USBZSessionJoinCallbackProxy(const USBZSessionJoinCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSessionJoinCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSessionJoinCallbackProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSessionJoinCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldContextObject() { return STRUCT_OFFSET(USBZSessionJoinCallbackProxy, WorldContextObject); } \
	FORCEINLINE static uint32 __PPO__SessionToJoin() { return STRUCT_OFFSET(USBZSessionJoinCallbackProxy, SessionToJoin); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSessionJoinCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSessionJoinCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
