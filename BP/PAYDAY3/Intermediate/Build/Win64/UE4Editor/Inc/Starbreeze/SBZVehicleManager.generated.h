// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef STARBREEZE_SBZVehicleManager_generated_h
#error "SBZVehicleManager.generated.h already included, missing '#pragma once' in SBZVehicleManager.h"
#endif
#define STARBREEZE_SBZVehicleManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnteredActionPhase); \
	DECLARE_FUNCTION(execOnExitedActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnteredActionPhase); \
	DECLARE_FUNCTION(execOnExitedActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVehicleManager(); \
	friend struct Z_Construct_UClass_USBZVehicleManager_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVehicleManager(); \
	friend struct Z_Construct_UClass_USBZVehicleManager_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleManager(USBZVehicleManager&&); \
	NO_API USBZVehicleManager(const USBZVehicleManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleManager(USBZVehicleManager&&); \
	NO_API USBZVehicleManager(const USBZVehicleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Vehicles() { return STRUCT_OFFSET(USBZVehicleManager, Vehicles); } \
	FORCEINLINE static uint32 __PPO__VehicleInfos() { return STRUCT_OFFSET(USBZVehicleManager, VehicleInfos); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
