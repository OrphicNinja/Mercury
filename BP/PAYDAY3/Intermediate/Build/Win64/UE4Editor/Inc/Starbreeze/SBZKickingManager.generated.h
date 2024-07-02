// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FUniqueNetIdRepl;
enum class ESBZKickingMode : uint8;
#ifdef STARBREEZE_SBZKickingManager_generated_h
#error "SBZKickingManager.generated.h already included, missing '#pragma once' in SBZKickingManager.h"
#endif
#define STARBREEZE_SBZKickingManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execKickPlayer);


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKickPlayer);


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZKickingManager(); \
	friend struct Z_Construct_UClass_USBZKickingManager_Statics; \
public: \
	DECLARE_CLASS(USBZKickingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZKickingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZKickingManager(); \
	friend struct Z_Construct_UClass_USBZKickingManager_Statics; \
public: \
	DECLARE_CLASS(USBZKickingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZKickingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZKickingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZKickingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZKickingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZKickingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZKickingManager(USBZKickingManager&&); \
	NO_API USBZKickingManager(const USBZKickingManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZKickingManager(USBZKickingManager&&); \
	NO_API USBZKickingManager(const USBZKickingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZKickingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZKickingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZKickingManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZKickingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZKickingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
