// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESBZUserPrivilegesProxy : uint8;
class USBZQueryPrivilege;
#ifdef STARBREEZE_SBZQueryPrivilege_generated_h
#error "SBZQueryPrivilege.generated.h already included, missing '#pragma once' in SBZQueryPrivilege.h"
#endif
#define STARBREEZE_SBZQueryPrivilege_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryPrivilege);


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryPrivilege);


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZQueryPrivilege(); \
	friend struct Z_Construct_UClass_USBZQueryPrivilege_Statics; \
public: \
	DECLARE_CLASS(USBZQueryPrivilege, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZQueryPrivilege)


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZQueryPrivilege(); \
	friend struct Z_Construct_UClass_USBZQueryPrivilege_Statics; \
public: \
	DECLARE_CLASS(USBZQueryPrivilege, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZQueryPrivilege)


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZQueryPrivilege(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZQueryPrivilege) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZQueryPrivilege); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZQueryPrivilege); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZQueryPrivilege(USBZQueryPrivilege&&); \
	NO_API USBZQueryPrivilege(const USBZQueryPrivilege&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZQueryPrivilege(USBZQueryPrivilege&&); \
	NO_API USBZQueryPrivilege(const USBZQueryPrivilege&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZQueryPrivilege); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZQueryPrivilege); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZQueryPrivilege)


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldContextObject() { return STRUCT_OFFSET(USBZQueryPrivilege, WorldContextObject); }


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZQueryPrivilege>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZQueryPrivilege_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
