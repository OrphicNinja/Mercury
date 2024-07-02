// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3DispatchCaller : uint8;
enum class EPD3DispatchCallerReason : uint8;
class USBZActionNotificationAsset;
class UObject;
class UPD3Dispatcher;
#ifdef STARBREEZE_PD3Dispatcher_generated_h
#error "PD3Dispatcher.generated.h already included, missing '#pragma once' in PD3Dispatcher.h"
#endif
#define STARBREEZE_PD3Dispatcher_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_RPC_WRAPPERS \
	virtual void Multicast_CallDispatcherByAsset_Implementation(const USBZActionNotificationAsset* CallerReason); \
 \
	DECLARE_FUNCTION(execCallDispatcher); \
	DECLARE_FUNCTION(execCallDispatcherByAsset); \
	DECLARE_FUNCTION(execGetDispatcher); \
	DECLARE_FUNCTION(execMulticast_CallDispatcherByAsset);


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CallDispatcherByAsset_Implementation(const USBZActionNotificationAsset* CallerReason); \
 \
	DECLARE_FUNCTION(execCallDispatcher); \
	DECLARE_FUNCTION(execCallDispatcherByAsset); \
	DECLARE_FUNCTION(execGetDispatcher); \
	DECLARE_FUNCTION(execMulticast_CallDispatcherByAsset);


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_EVENT_PARMS \
	struct PD3Dispatcher_eventMulticast_CallDispatcherByAsset_Parms \
	{ \
		const USBZActionNotificationAsset* CallerReason; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3Dispatcher(); \
	friend struct Z_Construct_UClass_UPD3Dispatcher_Statics; \
public: \
	DECLARE_CLASS(UPD3Dispatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3Dispatcher)


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPD3Dispatcher(); \
	friend struct Z_Construct_UClass_UPD3Dispatcher_Statics; \
public: \
	DECLARE_CLASS(UPD3Dispatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3Dispatcher)


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3Dispatcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3Dispatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3Dispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3Dispatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3Dispatcher(UPD3Dispatcher&&); \
	NO_API UPD3Dispatcher(const UPD3Dispatcher&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3Dispatcher(UPD3Dispatcher&&); \
	NO_API UPD3Dispatcher(const UPD3Dispatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3Dispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3Dispatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3Dispatcher)


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Caller() { return STRUCT_OFFSET(UPD3Dispatcher, Caller); } \
	FORCEINLINE static uint32 __PPO__CallData() { return STRUCT_OFFSET(UPD3Dispatcher, CallData); }


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3Dispatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3Dispatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
