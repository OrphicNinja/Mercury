// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESBZOnlineJoinType : uint8;
class USBZUpdatePartyJoinTypeCallbackProxy;
#ifdef STARBREEZE_SBZUpdatePartyJoinTypeCallbackProxy_generated_h
#error "SBZUpdatePartyJoinTypeCallbackProxy.generated.h already included, missing '#pragma once' in SBZUpdatePartyJoinTypeCallbackProxy.h"
#endif
#define STARBREEZE_SBZUpdatePartyJoinTypeCallbackProxy_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePartyJoinType);


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePartyJoinType);


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUpdatePartyJoinTypeCallbackProxy(); \
	friend struct Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USBZUpdatePartyJoinTypeCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUpdatePartyJoinTypeCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUpdatePartyJoinTypeCallbackProxy(); \
	friend struct Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USBZUpdatePartyJoinTypeCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUpdatePartyJoinTypeCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUpdatePartyJoinTypeCallbackProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUpdatePartyJoinTypeCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUpdatePartyJoinTypeCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUpdatePartyJoinTypeCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUpdatePartyJoinTypeCallbackProxy(USBZUpdatePartyJoinTypeCallbackProxy&&); \
	NO_API USBZUpdatePartyJoinTypeCallbackProxy(const USBZUpdatePartyJoinTypeCallbackProxy&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUpdatePartyJoinTypeCallbackProxy(USBZUpdatePartyJoinTypeCallbackProxy&&); \
	NO_API USBZUpdatePartyJoinTypeCallbackProxy(const USBZUpdatePartyJoinTypeCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUpdatePartyJoinTypeCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUpdatePartyJoinTypeCallbackProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUpdatePartyJoinTypeCallbackProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldContextObject() { return STRUCT_OFFSET(USBZUpdatePartyJoinTypeCallbackProxy, WorldContextObject); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUpdatePartyJoinTypeCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUpdatePartyJoinTypeCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
