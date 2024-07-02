// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZWindManager;
#ifdef STARBREEZE_SBZWindManager_generated_h
#error "SBZWindManager.generated.h already included, missing '#pragma once' in SBZWindManager.h"
#endif
#define STARBREEZE_SBZWindManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWindManager(); \
	friend struct Z_Construct_UClass_USBZWindManager_Statics; \
public: \
	DECLARE_CLASS(USBZWindManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWindManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWindManager(); \
	friend struct Z_Construct_UClass_USBZWindManager_Statics; \
public: \
	DECLARE_CLASS(USBZWindManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWindManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWindManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWindManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWindManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWindManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWindManager(USBZWindManager&&); \
	NO_API USBZWindManager(const USBZWindManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWindManager(USBZWindManager&&); \
	NO_API USBZWindManager(const USBZWindManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWindManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWindManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWindManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Emitters() { return STRUCT_OFFSET(USBZWindManager, Emitters); } \
	FORCEINLINE static uint32 __PPO__Receivers() { return STRUCT_OFFSET(USBZWindManager, Receivers); } \
	FORCEINLINE static uint32 __PPO__ReceiversPerID() { return STRUCT_OFFSET(USBZWindManager, ReceiversPerID); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWindManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWindManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
